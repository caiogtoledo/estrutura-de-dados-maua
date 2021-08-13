#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 40

typedef struct{
    char nome[MAX_STRING];
    int idade;
    float altura;
}Atleta;

//esqueleto de funções
void lerLinha(char linha[], FILE *arquivo);
//Compara duas estruturas Pessoa
void exibirAtleta(Atleta atleta);
Atleta lerAtleta(char linha[]);


int main(){
    FILE *arquivo;
    arquivo = fopen("atletas.csv", "r");

    if(arquivo == NULL){
        printf("Algo deu errado!\n");
        exit(EXIT_FAILURE);
    }

    char linha[MAX_STRING];
    Atleta atleta_mais_alto;
    Atleta atleta_mais_velho;
    int contador = 0;

    //ler as outras linhas
    while(!feof(arquivo)){
        lerLinha(linha, arquivo);
        // printf("%s\n", linha);
        Atleta atleta_atual = lerAtleta(linha);
        //verifica se é o primeiro, pq com certeza o primeiro ja vai ser o mais velho
        //o primeiro não tem comparação com anterior pq não existe um anterior
        if (contador == 0){
            atleta_mais_velho = atleta_atual;
        // se o atual for mais velho que o anterior, ele vira o mais velho
        }else if (atleta_atual.idade > atleta_mais_velho.idade){
            atleta_mais_velho = atleta_atual;
        }
        
        //só to com medo daquele negocio de ser float
        if (contador == 0){
            atleta_mais_alto = atleta_atual;
        }else if (atleta_atual.altura > atleta_mais_alto.altura){
            atleta_mais_alto = atleta_atual;
        }    
        contador++;
    }

    
    //exibir o mais velho
    printf("Atleta mais velho:\n");
    exibirAtleta(atleta_mais_velho);
    //exibir o mais alto
    printf("\nAtleta mais alto:\n");
    exibirAtleta(atleta_mais_alto);

    fclose(arquivo);
    return 0;
}


void lerLinha(char linha[], FILE *arquivo){
    fgets(linha, MAX_STRING, arquivo);
    if(linha[strlen(linha) - 1] == '\n')
        linha[strlen(linha) - 1] = '\0';
}

Atleta lerAtleta(char linha[]){
    Atleta Atleta;
    char *token = strtok(linha, ";");
    sprintf(Atleta.nome, "%s", token);
    token = strtok(NULL, ";");
    Atleta.idade = atoi(token);
    token = strtok(NULL, ";");
    Atleta.altura = atof(token);
    return Atleta;
}

void exibirAtleta(Atleta atleta){
    printf("Nome: %s\n",atleta.nome);
    printf("Idade: %i anos\n",atleta.idade);
    printf("Altura: %.2f metros\n",atleta.altura);
}

//é isso :)
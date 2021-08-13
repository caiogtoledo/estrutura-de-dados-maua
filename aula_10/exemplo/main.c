#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 40

typedef struct{
    char nome[MAX_STRING];
    int quantidade;
    int estalado;
}Personagem;

//esqueleto de funções
void lerLinha(char linha[], FILE *arquivo);
Personagem lerPersonagem(char linha[]);

int main(){
    FILE *arquivo;
    arquivo = fopen("Filmes.csv", "r");

    FILE *saida;
    saida = fopen("saida.csv", "w");

    if(arquivo == NULL){
        printf("Algo deu errado!\n");
        exit(EXIT_FAILURE);
    }
    //ler cabeçalho
    char linha[MAX_STRING];
    lerLinha(linha, arquivo);
    printf("%s\n", linha);

    int total_de_filmes = 0;

    //ler as outras linhas
    while(!feof(arquivo)){
        lerLinha(linha, arquivo);
        // printf("%s\n", linha);
        Personagem personagem = lerPersonagem(linha);
        printf("Nome do personagem: %s\tQuant: %i\n", personagem.nome, personagem.quantidade);
        total_de_filmes += personagem.quantidade;
        fprintf(saida, "%s;%i\n", personagem.nome, personagem.estalado);
    }

    printf("Total de filmes: %i\n", total_de_filmes);

    fclose(arquivo);
    return 0;
}

void lerLinha(char linha[], FILE *arquivo){
    fgets(linha, MAX_STRING, arquivo);
    if(linha[strlen(linha) - 1] == "\n")
        linha[strlen(linha) - 1] = "\0";
}

Personagem lerPersonagem(char linha[]){
    Personagem personagem;
    char *token = strtok(linha, ";");
    sprintf(personagem.nome, "%s", token);
    token = strtok(NULL, ";");
    personagem.quantidade = atoi(token);
    token = strtok(NULL, ";");
    personagem.estalado = atoi(token);
    return personagem;
}
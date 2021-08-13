#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 40

typedef struct{
    char nome[MAX_STRING];
}Pessoa;

//esqueleto de funções
void lerLinha(char linha[], FILE *arquivo);
//Compara duas estruturas Pessoa
int comparar(Pessoa pessoa1, Pessoa pessoa2);
//Troca dois elementos em um vetor
void trocar(Pessoa Pessoas[], int posicao);
//Aplica o algoritmo de Bubble Sort
void bubble_sort(Pessoa Pessoas[], int tamanho);
void exibirRegistros(Pessoa pessoas[], int tamanho);
Pessoa lerPessoa(char linha[]);
void mostrarNome(Pessoa pessoa);

int main(){
    FILE *arquivo;
    arquivo = fopen("registros.csv", "r");

    if(arquivo == NULL){
        printf("Algo deu errado!\n");
        exit(EXIT_FAILURE);
    }
    //ler cabeçalho
    char linha[MAX_STRING];
    Pessoa pessoas[MAX_STRING];
    int contador = 0;
    //ler as outras linhas
    while(!feof(arquivo)){
        lerLinha(linha, arquivo);
        // printf("%s\n", linha);
        Pessoa pessoa = lerPessoa(linha);
        printf("Nome da Pessoa: %s\n", pessoa.nome);
        pessoas[contador] = pessoa;
        contador++;
    }
    bubble_sort(pessoas, 15);
    printf("Em ordem alfabetica...\n");
    exibirRegistros(pessoas, 15);
    fclose(arquivo);
    return 0;
}

void lerLinha(char linha[], FILE *arquivo){
    fgets(linha, MAX_STRING, arquivo);
    if(linha[strlen(linha) - 1] == '\n')
        linha[strlen(linha) - 1] = '\0';
}

Pessoa lerPessoa(char linha[]){
    Pessoa pessoa;
    // char *token = strtok(linha, ";");
    // sprintf(Pessoa.nome, "%s", token);
    sprintf(pessoa.nome, "%s", linha);
    return pessoa;
}

//Compara duas estruturas Pessoa
int comparar(Pessoa pessoa1, Pessoa pessoa2){
    int ret;
    ret = strcmp(pessoa1.nome, pessoa2.nome);
    if(ret > 0) {
        //troca
        return 1;
    }else{
        // não troca
        return 0;
    }
}

//Troca dois elementos em um vetor
void trocar(Pessoa Pessoas[], int posicao){
  Pessoa aux = Pessoas[posicao];
  Pessoas[posicao] = Pessoas[posicao+1];
  Pessoas[posicao+1] = aux;
}

//Aplica o algoritmo de Bubble Sort
void bubble_sort(Pessoa Pessoas[], int tamanho){
    for (int i = tamanho-1; i>=1; i--){
        for(int Pessoa=0; Pessoa<=i-1; Pessoa++){
            if (comparar(Pessoas[Pessoa],Pessoas[Pessoa+1]) == 1){
                trocar(Pessoas, Pessoa);
            }
        }
    } 
}

void mostrarNome(Pessoa pessoa){
    printf("%s\n", pessoa.nome);
}

void exibirRegistros(Pessoa pessoas[], int tamanho){
    char nome[MAX_STRING] = "Registros:";
    printf("%s\n",nome);
    for (int i = 0; i<tamanho; i++){
        mostrarNome(pessoas[i]);
    }
}
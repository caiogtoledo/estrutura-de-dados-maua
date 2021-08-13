#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 40

typedef struct{
    char nome[MAX_STRING];
    int quantidade;
    float preco;
}Produto;

//esqueleto de funções
void lerLinha(char linha[], FILE *arquivo);
Produto lerProduto(char linha[]);

int main(){
    FILE *arquivo;
    arquivo = fopen("compras.csv", "r");

    if(arquivo == NULL){
        printf("Algo deu errado!\n");
        exit(EXIT_FAILURE);
    }
    //ler cabeçalho
    char linha[MAX_STRING];
    float preco_total = 0.0;

    //ler as outras linhas
    while(!feof(arquivo)){
        lerLinha(linha, arquivo);
        // printf("%s\n", linha);
        Produto produto = lerProduto(linha);
        printf("Nome do Produto: %s\tQuant: %i\tPreco: R$%.2f \n", produto.nome, produto.quantidade, produto.preco);
        preco_total += produto.quantidade * produto.preco;
    }

    printf("Preco total: R$%.2f\n", preco_total);

    fclose(arquivo);
    return 0;
}

void lerLinha(char linha[], FILE *arquivo){
    fgets(linha, MAX_STRING, arquivo);
    if(linha[strlen(linha) - 1] == '\n')
        linha[strlen(linha) - 1] = '\0';
}

Produto lerProduto(char linha[]){
    Produto produto;
    char *token = strtok(linha, ";");
    sprintf(produto.nome, "%s", token);
    token = strtok(NULL, ";");
    produto.quantidade = atoi(token);
    token = strtok(NULL, ";");
    produto.preco = atof(token);
    return produto;
}
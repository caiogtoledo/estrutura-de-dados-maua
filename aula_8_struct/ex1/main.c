/*
*   Projeto: Exercício 1 - Lista Structs - Pessoa
*   Autor: Murilo Zanini de Carvalho
*   Versão: 1.0
*   Data: 07/05/2021
*/

//Importar as bibliotecas que serão utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Constantes do programa
#define MAX_STRING 100

//Estruturas
typedef struct{
    int idade;
    char nome[MAX_STRING];
    char endereco[MAX_STRING];
}Pessoa;

//Protótipos de função
Pessoa LerPessoa();
void ExibirPessoa(Pessoa);
void LerString(char[]);

//Função Principal
int main(){
    Pessoa pessoa;
    pessoa = LerPessoa();
    ExibirPessoa(pessoa);
    return 0;
}

//Definição das funções
void LerString(char s[]){
    fflush(stdin);
    fgets(s, MAX_STRING, stdin);
    if(s[strlen(s) - 1] == '\n')
        s[strlen(s) - 1] = '\0';
}
Pessoa LerPessoa(){
    Pessoa pessoa;
    printf("Informando os dados de uma pessoa:\n");
    printf("Nome:");
    LerString(pessoa.nome);
    printf("Idade:");
    scanf("%i", &(pessoa.idade));
    printf("Endereco:");
    LerString(pessoa.endereco);
    return pessoa;
}
void ExibirPessoa(Pessoa pessoa){
    printf("Dados da pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %i\n", pessoa.idade);
    printf("Endereco: %s\n", pessoa.endereco);
}

/*
*   Projeto: Exercício 1 - Lista Structs - Pessoa - Versão Power
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
    char CEP[MAX_STRING];
    char logradouro[MAX_STRING];
    char numero_da_residencia[MAX_STRING];
    char complemento[MAX_STRING];
    char cidade[MAX_STRING];
}Endereco;

typedef struct{
    int idade;
    char nome[MAX_STRING];
    Endereco endereco;
}Pessoa;

//Protótipos de função
Pessoa LerPessoa();
void ExibirPessoa(Pessoa);
void LerString(char[]);
Endereco LerEndereco();
void ExibirEndereco(Endereco);

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
    pessoa.endereco = LerEndereco();
    return pessoa;
}
void ExibirPessoa(Pessoa pessoa){
    printf("Dados da pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %i\n", pessoa.idade);
    printf("Endereco:\n");
    ExibirEndereco(pessoa.endereco);
}

Endereco LerEndereco(){
    Endereco endereco;
    printf("Informecoes de endereco:\n");
    printf("CEP:");
    LerString(endereco.CEP);
    printf("Logradouro(rua,av.,travessa):");
    LerString(endereco.logradouro);
    printf("Numero:");
    LerString(endereco.numero_da_residencia);

    printf("Complemento(-1 se nao existir):"); 
    LerString(endereco.complemento);

    printf("Cidade:");
    LerString(endereco.cidade);

    return endereco;
}
void ExibirEndereco(Endereco endereco){
    printf("CEP:%s\n", endereco.CEP);
    printf("Logradouro:%s\n", endereco.logradouro);
    printf("Numero:%s\n", endereco.numero_da_residencia);
    if(strcmp(endereco.complemento, "-1") != 0)
        printf("Complemento:%s\n", endereco.complemento);
    printf("Cidade:%s\n", endereco.cidade);
}


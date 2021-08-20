#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Caio Toledo RA: 20.01430-9
//Caio Kurek RA: 20.01383-3
//Guilherme Mattioli RA: 20.00599-7
//Vinicius Soares RA: 20.02137-2

typedef struct{
    char nome[80];
    int idade;
}Pessoa;

//Prototipos de funcao
void quicksort(Pessoa vetor[], int inicio, int fim);
void exibirVetor(Pessoa vetor[], int tamanho);
int particionar(Pessoa vetor[], int inicio, int fim, int pivo);
void trocar(Pessoa *num1, Pessoa *num2);
int buscaBinaria(Pessoa vetor[], int inicio, int fim, Pessoa procurado);

int main(){
    Pessoa dados[5] = {
        {"Caio",19},
        {"Kurek",19},
        {"Macaco",19},
        {"Vini",19},
        {"Gui",19},
    };
    printf("Vetor fora de ordem:\n");
    exibirVetor(dados, 5);
    quicksort(dados, 0, 4);
    printf("Vetor em de ordem:\n");
    exibirVetor(dados, 5);
    Pessoa alvo =  {"Caio",19};
    // printf("Buscando por %s = %i\n", alvo.nome, buscaBinaria(dados, 0, 4, alvo));
    int busca = buscaBinaria(dados, 0, 4, alvo);
    if(busca == -1){
        printf("Não achou %s nos dados", alvo.nome);
    }else{
        printf("%s esta na posicao %i\n", alvo.nome, busca);
    }
    return 0;
}

//Definição das funções
void exibirVetor(Pessoa vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++)
        printf("%i: %s\n", i, vetor[i].nome);
}

void quicksort(Pessoa vetor[], int inicio, int fim){
    int pivo, novoPivo;
    if(inicio < fim){
        pivo = (inicio+fim)/2;
        novoPivo = particionar(vetor, inicio, fim, pivo);
        quicksort(vetor, inicio, novoPivo-1);
        quicksort(vetor, novoPivo+1, fim);
    }
}

void trocar(Pessoa *num1, Pessoa *num2){
    Pessoa temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int particionar(Pessoa vetor[], int inicio, int fim, int pivo){
    int i, j;
    Pessoa valor_pivo = vetor[pivo];
    trocar(&vetor[pivo], &vetor[fim]);
    j = inicio;
    for(i = inicio; i < fim; i++){
        int troca = strcmp(vetor[i].nome,valor_pivo.nome);
        if(troca < 0){
            trocar(&vetor[i], &vetor[j]);
            j++;
        }
    }
    trocar(&vetor[j], &vetor[fim]);
    return j;
}

int buscaBinaria(Pessoa vetor[], int inicio, int fim, Pessoa procurado){
    if (inicio > fim ){
        return -1;
    }
    int centro = (inicio+fim)/2;
    int comp = strcmp(vetor[centro].nome, procurado.nome);
    if(comp == 0)
        return centro;
    
    if(comp < 0){
        return buscaBinaria(vetor, centro+1, fim, procurado);
    }
    else{
        return buscaBinaria(vetor, inicio, centro-1, procurado);
    }
}
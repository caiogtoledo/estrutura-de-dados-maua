#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 5
//Protótipo das funções
void LerVetor(int vetor[TAMANHO_VETOR]);
int MaiorValor(int vetor[TAMANHO_VETOR]);
float ValorMedio(int vetor[TAMANHO_VETOR]);
void MostraVetor(int vetor[TAMANHO_VETOR]);

int main()
{
    int meuVetor[TAMANHO_VETOR];
    //Chama a função que faz a leitura do vetor
    LerVetor(meuVetor);
    printf("Vetor Informado:\n");
    MostraVetor(meuVetor);
    printf("Maior valor: %i\n", MaiorValor(meuVetor));
    printf("Valor Medio: %.2f\n", ValorMedio(meuVetor));
    return 0;
}


void LerVetor(int vetor[TAMANHO_VETOR]) {
    for(int contador = 0; contador < TAMANHO_VETOR; contador++){
        printf("Informe a posicao[%i]:", contador);
        scanf("%i", &vetor[contador]);
    }
}

int MaiorValor(int vetor[TAMANHO_VETOR]) {
    int maior = vetor[0];
    for(int contador = 0; contador < TAMANHO_VETOR; contador++){
        if (vetor[contador] > maior){
            maior = vetor[contador];
        }
    }
    return maior;
}

float ValorMedio(int vetor[TAMANHO_VETOR]) {
    int soma = 0;
    for(int contador = 0; contador < TAMANHO_VETOR; contador++){
        soma += vetor[contador];
    }
    return (float)soma / TAMANHO_VETOR;
}

void MostraVetor(int vetor[TAMANHO_VETOR]) {
    for(int contador = 0; contador < TAMANHO_VETOR; contador++){
        printf("[%i]:%i\n", contador, vetor[contador]);
    }
}

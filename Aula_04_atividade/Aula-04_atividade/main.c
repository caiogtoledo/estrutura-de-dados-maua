#include <stdio.h>

#include <stdlib.h>

#define MAX 100

//NOME: Caio Kurek Marques Manuel RA: 20.01383-3
//NOME: Caio Toledo               RA: 20.01430-9
//NOME: Vinicius Alves Soares     RA: 20.02137-2


// programa principal. Não crie funções

int main()

{

    int L[] = {7,5,7,1,9,1,0,3,6,10,5,9,12,4,8};

    int v, N = sizeof(L)/sizeof(int); // só para saber o tamanho da lista L

    int Menor[N], Igual[N], Maior[N];



    // crie outras variáveis aqui

    int contadorAtual = 0;
    int contadorMaior = 0;
    int contadorMenor = 0;
    int contadorIgual = 0;

    // o usuário deve digitar o valor v

    printf("DIgite o valor de v: ");
    scanf("%i",&v);

    // for que percorre a lista L; cria as listas Menor, Igual e Maior; e vai calculando o tamanho dessas três listas

    for(contadorAtual = 0; contadorAtual < 15; contadorAtual++){
        if (L[contadorAtual] > v){
            Maior[contadorMaior] = contadorAtual;
            contadorMaior++;
        }
        else if (L[contadorAtual] < v){
            Menor[contadorMenor] = contadorAtual;
            contadorMenor++;
            }
            else{
            Igual[contadorIgual] = contadorAtual;
            contadorIgual++;
            }
        }
    contadorAtual = 0;
    // while que exibe as três colunas
    while (contadorAtual < 15){
        if (contadorAtual < contadorMenor){
          printf("%i\t",Menor[contadorAtual]);
        }
        else {
          printf("\t");
        }
        if (contadorAtual < contadorIgual){
          printf("%i\t",Igual[contadorAtual]);
        }
        else {
          printf("\t");
        }
        if (contadorAtual < contadorMaior){
          printf("%i\t",Maior[contadorAtual]);
        }
        else {
          printf("\t");
        }
        printf("\n");
        contadorAtual++;

    }

    return 0;

}



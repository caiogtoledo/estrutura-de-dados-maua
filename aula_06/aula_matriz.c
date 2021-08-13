#include <stdio.h>
#include <stdlib.h>
 
#define TOTAL_LINHAS 2
#define TOTAL_COLUNAS 2
 
void mostrarMatriz(int matriz[TOTAL_LINHAS][TOTAL_COLUNAS]);
void multiplicaMatriz(int m1[TOTAL_LINHAS][TOTAL_COLUNAS], int m2[TOTAL_LINHAS]
[TOTAL_COLUNAS], int resultado[TOTAL_LINHAS][TOTAL_COLUNAS]);
int achaMaiorValor(int matriz[TOTAL_LINHAS][TOTAL_COLUNAS]);
 
int main(){
    int m1[TOTAL_LINHAS][TOTAL_COLUNAS] = {{1,3},{13,1}};
    int m2[TOTAL_LINHAS][TOTAL_COLUNAS] = {{2,6},{50,2}};
    int res[TOTAL_LINHAS][TOTAL_COLUNAS];
    multiplicaMatriz(m1, m2, res);
    mostrarMatriz(res);
    printf("Maior valor da matriz: %i\n", achaMaiorValor(res));
    return 0;
}
 
void mostrarMatriz(int matriz[TOTAL_LINHAS][TOTAL_COLUNAS]){
   for(int linhaAtual = 0; linhaAtual < TOTAL_LINHAS; linhaAtual++){
       for(int colunaAtual = 0; colunaAtual < TOTAL_COLUNAS; colunaAtual++){
           printf("[%i][%i]: %i\t", linhaAtual, colunaAtual, matriz[linhaAtual][colunaAtual]);
       }
       printf("\n");
   } 
}

void multiplicaMatriz(int m1[TOTAL_LINHAS][TOTAL_COLUNAS], int m2[TOTAL_LINHAS]
[TOTAL_COLUNAS], int resultado[TOTAL_LINHAS][TOTAL_COLUNAS]){
    for(int linhaAtual = 0; linhaAtual < TOTAL_LINHAS; linhaAtual++){
        for(int colunaAtual = 0; colunaAtual < TOTAL_COLUNAS; colunaAtual++){
            resultado[linhaAtual][colunaAtual] = 0;
            for(int interador = 0; interador < TOTAL_LINHAS; interador++){
                resultado[linhaAtual][colunaAtual] += m1[linhaAtual][interador] *
                m2[interador][colunaAtual];
            }
        }
    }
}
 
int achaMaiorValor(int matriz[TOTAL_LINHAS][TOTAL_COLUNAS]){
    int maiorValor = matriz[0][0];
    for(int linhaAtual = 0; linhaAtual < TOTAL_LINHAS; linhaAtual++){
        for(int colunaAtual = 0; colunaAtual < TOTAL_COLUNAS; colunaAtual++){
            if(matriz[linhaAtual][colunaAtual] > maiorValor){
                maiorValor = matriz[linhaAtual][colunaAtual];
            }
        }
    }
    return maiorValor;
}



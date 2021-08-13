
#include <stdio.h>

#include <stdlib.h>

#define N 2

//NOME: Caio Kurek      RA: 20.0138-3
//NOME: Caio Toledo     RA: 20.01430-9
//NOME: Vinicius Soares RA: 20.02137-2


// protótipos

void MultiplicarMatriz(int[][N], int[][N], int[][N]);

void MultiplicarMatrizVetor(int[][N], int[], int[]);

void CopiarMatriz(int [][N], int [][N]);

void mostrarMatriz(int [][N]);

void mostrarVetor(int []);

// programa principal

int main()

{

    int i, n;

    // crie as matrizes M, Aux e R. Preencha os valores da matriz M

    int M[][N] = {{0,1},{1,1}};
    int Aux[N][N]= {{0,1},{1,1}};
    int R[N][N]= {{0,1},{1,1}};

    // crie os vetores v e r. Preencha os valores do vetor v

    int v[2] = {0,1};
    int r[2];

    printf("Digite o numero de Fibonacci desejado: ");

    scanf("%i", &n);

    // calcular R = M^n

    for(i = 1; i < n; i++){
        MultiplicarMatriz(M,Aux,R);
        CopiarMatriz(Aux,R);
    }

    // calcular r = R * v e exibir seu primeiro valor
    MultiplicarMatrizVetor(R,v,r);
    printf("%i",r[0]);

    return 0;

}

// as sub-rotinas

void MultiplicarMatriz(int A[][N], int B[][N], int Resp[][N])

{
    for(int linhaAtual = 0; linhaAtual < N; linhaAtual++){
        for(int colunaAtual = 0; colunaAtual < N; colunaAtual++){
            Resp[linhaAtual][colunaAtual] = 0;
            for(int i = 0; i < N; i++){
                Resp[linhaAtual][colunaAtual] += A[linhaAtual][i]*B[i][colunaAtual];
            }
        }
    }
}

void MultiplicarMatrizVetor(int M[][N], int v[], int resp[])

{
    for(int linhaAtual = 0; linhaAtual < N; linhaAtual++){
        resp[linhaAtual] = 0;
        for(int colunaAtual = 0; colunaAtual < N; colunaAtual++){
            resp[linhaAtual] += M[linhaAtual][colunaAtual]*v[colunaAtual];
        }
    }
    mostrarVetor(resp);
}

void CopiarMatriz(int recebe[][N], int envia[][N])

{
    for(int linhaAtual = 0; linhaAtual < N; linhaAtual++){
        for(int colunaAtual = 0; colunaAtual < N; colunaAtual++){
            recebe[linhaAtual][colunaAtual] = envia[linhaAtual][colunaAtual];
        }
    }
}

void mostrarMatriz(int matriz[][N]){
   for(int linhaAtual = 0; linhaAtual < N; linhaAtual++){
       for(int colunaAtual = 0; colunaAtual < N; colunaAtual++){
           printf("[%i][%i]: %i\t", linhaAtual, colunaAtual, matriz[linhaAtual][colunaAtual]);
       }
       printf("\n");
   }
}

void mostrarVetor(int vetor[]){
   for(int linhaAtual = 0; linhaAtual < N; linhaAtual++){
           printf("[%i]: %i\t", linhaAtual, vetor[linhaAtual]);
           printf("\n");
   }
}
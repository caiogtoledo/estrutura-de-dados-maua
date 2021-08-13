#include <stdio.h>
#include <stdlib.h>

#define TOTAL_LINHAS 6
#define TOTAL_COLUNAS 3

void pioresProvasDosAlunos(int matriz[TOTAL_LINHAS][TOTAL_COLUNAS], int pioresProvas[TOTAL_LINHAS]);

int main(){
    int pioresProvas[TOTAL_LINHAS];
    int c0;
    int c1;
    int c2;

    int notas[TOTAL_LINHAS][TOTAL_COLUNAS] = {
        {1,3,3},
        {10,1,5},
        {10,1,5},
        {7,3,5},
        {0,5,1},
        {10,1,3},
    };

    // pioresProvasDosAlunos(notas, pioresProvas);
    for(int aluno = 0; aluno<TOTAL_LINHAS; aluno++){
        int menorNota;
        int provaMenorNota;
        for(int prova = 0; prova<TOTAL_COLUNAS; prova++){
            int notaAtual = notas[aluno][prova];

            if(prova == 0){
                menorNota = notaAtual;
                provaMenorNota = prova;
            }else if(notaAtual < menorNota){
                menorNota = notaAtual;
                provaMenorNota = prova;
            }

            // if(notaAtual < menorNota){
            //     menorNota = notaAtual;
            //     provaMenorNota = prova;
            // }
        }
        pioresProvas[aluno] = provaMenorNota;
    }

    for(int aluno = 0; aluno<TOTAL_LINHAS; aluno++){
        printf("%i\n", pioresProvas[aluno]);
    }

    // [0,1,1,1,0,1]

    for(int i=0;i<TOTAL_LINHAS;i++){
        if(pioresProvas[i] == 0){
            c0++;
        }else if(pioresProvas[i] == 1){
            c1++;
        }else if(pioresProvas[i] == 2){
            c2++;
        }
    }

    printf("O numero de alunos que a pior nota foi na 1: %i\n", c0);
    printf("O numero de alunos que a pior nota foi na 2: %i\n", c1);
    printf("O numero de alunos que a pior nota foi na 3: %i\n", c2);

    return 0;
}



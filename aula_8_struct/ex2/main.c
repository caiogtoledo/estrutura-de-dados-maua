/*
*   Projeto: Horas
*   Autor: Caios
*   Versão: 1.0
*   Data: 07/05/2021
*/

//Importar as bibliotecas que serão utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Constantes do programa
#define TAMANHO_VETOR 5

//Estruturas
typedef struct{
    int hora;
    int minuto;
    int segundo;
}Hora;

//Protótipos de função
Hora LerHora();
void LerVetorDeHoras(Hora[TAMANHO_VETOR]);
int MaiorHora(Hora[TAMANHO_VETOR]);
void ExibirHoraFormatada(Hora);

//Função Principal
int main(){
    Hora horas[TAMANHO_VETOR];
    LerVetorDeHoras(horas);

    int index_maior;
    index_maior = MaiorHora(horas);
    printf("----------------\n");
    ExibirHoraFormatada(horas[index_maior]);
    return 0;
}

Hora LerHora(){
    Hora hora;
    printf("Informando a hora:\n");

    do{
        printf("Horas:");
        scanf("%i", &hora.hora);
    }while(hora.hora > 23 || hora.hora < 0);
    
    do{
        printf("Minutos:");
        scanf("%i", &hora.minuto);
    }while(hora.minuto > 60 || hora.minuto < 0);

    do{
        printf("Segundos:");
        scanf("%i", &hora.segundo);
    }while(hora.segundo > 60 || hora.segundo < 0);

    return hora;
}

void LerVetorDeHoras(Hora horas[TAMANHO_VETOR]){
    for(int i = 0; i<TAMANHO_VETOR; i++){
        horas[i] = LerHora();
    }
}

int MaiorHora(Hora horas[TAMANHO_VETOR]){
    int index_maior;

    for(int i = 0; i<TAMANHO_VETOR; i++){
       if(horas[i].hora > horas[index_maior].hora){
           index_maior = i;
       }else if(horas[i].hora == horas[index_maior].hora){
            if(horas[i].minuto > horas[index_maior].minuto){
                index_maior = i;
            }else if(horas[i].minuto == horas[index_maior].minuto){
                if(horas[i].segundo > horas[index_maior].segundo){
                    index_maior = i;
                }
            }
       }
    }
    return index_maior;
}


void ExibirHoraFormatada(Hora hora){
    printf("%02i:" , hora.hora);
    printf("%02i:" , hora.minuto);
    printf("%02i\n", hora.segundo);
}
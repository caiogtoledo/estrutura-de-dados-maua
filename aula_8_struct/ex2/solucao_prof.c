/*
*   Projeto: Exercício 2 - Lista Structs - Hora
*   Autores: 
*   Versão: 1.0
*   Data: 07/05/2021
*/

//Importar as bibliotecas que serão utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definição de constantes
#define TAMANHO_VETOR 5
#define FATOR_CONVERSAO_HORA_SEGUNDO 3600
#define FATOR_CONVERSAO_MINUTO_SEGUNDO 60

//Definição das estruturas
typedef struct {
    int hora;
    int minuto;
    int segundo;
} Hora;

//Protótipo das funções
Hora LerHora();
void LerVetorDeHoras(Hora[]);
Hora EncontraMaiorHoraNoVetor(Hora[]);
Hora EncontrarMaiorHoraEntreDois(Hora, Hora);
void ExibirHora(Hora);
int ConverterParaSegundo(Hora);
Hora AjustarHora(Hora);

//Função Pricipal
int main(){
    Hora horas[TAMANHO_VETOR];
    LerVetorDeHoras(horas);
    printf("Maior Hora:\n");
    ExibirHora(EncontraMaiorHoraNoVetor(horas));
    return 0;
}

//Definições das Funções
Hora LerHora(){
    Hora hora;
    printf("Informe a hora (hora, min e seg):");
    scanf("%i", &(hora.hora));
    scanf("%i", &(hora.minuto));
    scanf("%i", &(hora.segundo));
    return AjustarHora(hora);
}

Hora AjustarHora(Hora hora){
    hora.minuto = hora.minuto + (hora.segundo / 60);
    hora.segundo = hora.segundo % 60;
    hora.hora = hora.hora + (hora.minuto / 60);
    hora.minuto = hora.minuto % 60;
    hora.hora = hora.hora % 24;
    return hora;
}

void LerVetorDeHoras(Hora horas[]){
    for(int i = 0; i < TAMANHO_VETOR; i++){
        horas[i] = LerHora();
    }
}
void ExibirHora(Hora hora){
    printf("Hora: %02i:%02i:%02i\n", hora.hora, hora.minuto, hora.segundo);
}
int ConverterParaSegundo(Hora hora){
    return (hora.hora*FATOR_CONVERSAO_HORA_SEGUNDO)+(hora.minuto*FATOR_CONVERSAO_MINUTO_SEGUNDO)+hora.segundo;
}

Hora EncontrarMaiorHoraEntreDois(Hora h1, Hora h2){
    if(ConverterParaSegundo(h1) > ConverterParaSegundo(h2))
        return h1;
    return h2;
}

Hora EncontraMaiorHoraNoVetor(Hora horas[]){
    Hora maiorHora = horas[0];
    for(int i = 0; i < TAMANHO_VETOR; i++){
        maiorHora = EncontrarMaiorHoraEntreDois(maiorHora, horas[i]);
    }
    return maiorHora;
}
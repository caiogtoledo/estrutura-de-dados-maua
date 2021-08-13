//
//  main.c
//  Aula03-01
//
//  Created by Caio Toledo on 05/03/21.
//

#include <stdio.h>
//Prototipos de funções
float CalcularMedia(int num1, int num2, int num3);
void ExibirMaior(int valor1, int valor2);

int main()
{
    int numero1, numero2, numero3;
    float media;
    printf("Informe 3 numeros:");
    scanf("%i%i%i", &numero1, &numero2, &numero3);
    media = CalcularMedia(numero1, numero2, numero3);
    printf("Valor da media: %.2f\n", media);
    ExibirMaior(numero1, numero2);
    return 0;
}

//Definição das funções
float CalcularMedia(int num1, int num2, int num3){
    float m;
    //m = (num1+num2+num3) / 3; //Característica do C - int/int == int
    m = (num1+num2+num3) / 3.0;
    return m;
}

void ExibirMaior(int valor1, int valor2){
    if(valor1 > valor2){
        printf("Maior valor é: %i", valor1);
    }else {
        printf("Maior valor é: %i", valor2);
    }
}

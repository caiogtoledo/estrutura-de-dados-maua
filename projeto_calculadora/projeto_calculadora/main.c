#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Protótipo da função
void MostrarMenu();
void AvaliarOpcao(int opcao);
float Somar(float n1, float n2);
float Subtrair(float n1, float n2);
float Multiplicacao(float n1, float n2);
float Divisao(float n1, float n2);
float Raiz(float n1, float n2);
float Potencia(float n1, float n2);
float Seno(float n1);
float Cosseno(float n1);

int main()
{
    int opcao;
    do
    {
        system("clear");
        MostrarMenu();
        scanf("%i", &opcao);
        AvaliarOpcao(opcao);
//        system("pause");

    }
    while(opcao != -1);

    return 0;
}

//Definições
void MostrarMenu()
{
    printf("==========================\n");
    printf("Calculadora\n");
    printf("==========================\n");
    printf("(1) Somar\n");
    printf("(2) Subtrair\n");
    printf("(3) Multiplicacao\n");
    printf("(4) Divisao\n");
    printf("(5) Raiz\n");
    printf("(6) Potencia\n");
    printf("(7) Seno\n");
    printf("(8) Cosseno\n");
    printf("(-1) Sair\n");
    printf("Opcao:");
}

void AvaliarOpcao(int opcao)
{
    float n1, n2, res;
    switch(opcao)
    {
    case -1:
        printf("Obrigado por utilizar o sistema\n");
        printf(":D\n");
        break;
    case 1:
        printf("Informe 2 numeros:");
        scanf("%f %f", &n1, &n2);
        res = Somar(n1, n2);
        printf("Resposta: %.2f\n", res);
        break;
    case 2:
        printf("Informe 2 numeros:");
        scanf("%f %f", &n1, &n2);
        res = Subtrair(n1, n2);
        printf("Resposta: %.2f\n", res);
        break;
    case 3:
        printf("Informe 2 numeros:");
        scanf("%f %f", &n1, &n2);
        res = Multiplicacao(n1, n2);
        printf("Resposta: %.2f\n", res);
        break;
    case 4:
        printf("Informe 2 numeros:");
        scanf("%f %f", &n1, &n2);
        res = Divisao(n1, n2);
        printf("Resposta: %.2f\n", res);
        break;
    case 5:
        printf("Informe 2 numeros:");
        scanf("%f %f", &n1, &n2);
        res = Raiz(n1, n2);
        printf("Resposta: %.2f\n", res);
        break;
    case 6:
        printf("Informe 2 numeros:");
        scanf("%f %f", &n1, &n2);
        res = Potencia(n1, n2);
        printf("Resposta: %.2f\n", res);
        break;
    case 7:
        printf("Informe o angulo em graus:");
        scanf("%f", &n1);
        res = Seno(n1);
        printf("Resposta: %.2f\n", res);
        break;
    case 8:
        printf("Informe o angulo em graus:");
        scanf("%f", &n1);
        res = Cosseno(n1);
        printf("Resposta: %.2f\n", res);
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }
}

float Somar(float n1, float n2)
{
    return n1+n2;
}

float Subtrair(float n1, float n2)
{
    return n1-n2;
}

float Multiplicacao(float n1, float n2)
{
    return n1*n2;
}

float Divisao(float n1, float n2)
{
    return n1/n2;
}

float Raiz(float n1, float n2)
{
    return pow(n1,1/n2);
}

float Potencia(float n1, float n2)
{
    return pow(n1,n2);
}

float Seno(float n1)
{
    return sin(n1*M_PI/180);
}

float Cosseno(float n1)
{
    return cos(n1*M_PI/180);
}




#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fatorial(float x);


int main()
{
/*C2.15 =>
                    Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprimaas de três maneiras diferentes: separadas por
                    espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada operação de escrita das três
                    variáveis.
 */

//   int a;
//   char b;
//   float c;
//
//   a = 1;
//   b = 65;
//   c = 2.0;
//
//   printf("%i %c %.2f \n", a, b, c);
//
//   printf("%i\t%c\t%.2f \n", a, b, c);
//
//   printf("%i\n%c\n%.2f", a, b, c);

/*C5.12 =>
                             Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
                             desse número, com exceção dele próprio. Exemplo: a soma dos divisores do número 66 é 1 +
                             2 + 3 + 6 + 11 + 22 + 33 = 78
*/

//    int i, v, soma;
//
//    printf("Digite um valor: ");
//    scanf("%i",&v);
//
//    i = 1;
//    soma = 0;
//    while (i < v) {
//        if (v % i == 0){
//            soma += i;
//        }
//        i++;
//    }
//    printf("%i\n", soma);

/*PV18 =>
                                Faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule o
                                valor do seno desse ângulo usando a sua respectiva série de Taylor:
 */

//    float ag, i, ar, soma;
//
//
//    printf("Digite o valor do angulo em graus: ");
//    scanf("%f", &ag);
//
//    ar = ag*3.1415926/180.0;
//
//    i = 0.0;
//    soma = 0.0;
//    for (i ; i < 6.0 ; i++) {
//        soma += (pow(-1,i)/fatorial(2*i+1))*pow(ar,(2*i+1));
//    }
//    printf("%.2f\n", soma);


    return 0;
}

float fatorial(float x) {
   float fat = x;
   while (fat > 1) {
      x *= fat - 1;
      fat--;

   }
return x;
}

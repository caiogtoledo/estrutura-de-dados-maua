//
//  main.c
//  ola-mundo
//
//  Created by Caio Toledo on 19/02/21.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c, delta, r1, r2;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    delta = (pow(b,2) - 4*a*c);
    if( delta < 0 )
    printf("Nao existem raizes reais \n");
    else {
    r1 = (-b + sqrt(delta))/(2*a);
    r2 = (-b - sqrt(delta))/(2*a);
    if( delta == 0 )
    printf("Existe uma unica raiz: %4.2f\n",
    r1);
    else
    printf("As raizes são: %4.2f e %4.2f\n",
    r1, r2);
    }
    return 0;
}

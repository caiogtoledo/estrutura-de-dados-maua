//
//  main.c
//  aula02-02
//
//  Created by Caio Toledo on 26/02/21.
//

#include <stdio.h>

int main() {
    int r, resto, contador3;
    resto = 0;
    contador3 = 0;
    printf("digite o valor do resistor:\n");
    scanf("%i", &r);
    while (r >- 1) {
        while (resto == 0) {
            contador3 += contador3;
            resto = r%10;
        }
    }
    printf("%i", contador3);
    return 0;
}

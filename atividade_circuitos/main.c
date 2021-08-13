#include <stdio.h>
#include <stdlib.h>

int main(){
    int g, h, i, j;
    signed char a ; // defina “a” como uma variável de 8 bits sinalizada
    signed char b ; // defina “b” como uma variável de 8 bits sinalizada
    unsigned char c ; // defina “c” como uma variável de 8 bits não sinalizada
    unsigned char d; // define “d” como uma variável de 8 bits não sinalizada
    unsigned char e; // define “e” como uma variável de 8 bits não sinalizada
    unsigned char f; // define “f” como uma variável de 8 bits não sinalizada
    a=0x80; // carrega na variável “a” o valor hexadecimal 8X onde X é dígito do RA
    b=0xF1; // carrega na variável “b” o valor hexadecimal F1
    c=0x80; // carrega na variável “c” o valor hexadecimal 8X onde X é dígito do RA
    d=0xF1; // carrega na variável “d” o valor hexadecimal F1
    e=0x80; // carrega na variável “e” o valor hexadecimal 8X onde X é dígito do RA
    f=0x2D; // carrega na variável “f” o valor hexadecimal 2D
    g = a-b; // calcula g = a menos b (operação sinalizada)
    h =b-a; // calcula h = b menos a (operação sinalizada)
    i =d-c; // calcula i = d menos c (operação não sinalizada)
    j= e*f; // calcula j = e vezes f (operação não sinalizada)
    printf("a = %i\n",a);
    printf("b = %i\n",b); 
    printf("c = %i\n",c); 
    printf("d = %i\n",d); 
    printf("e = %i\n",e); 
    printf("f = %i\n",f); 
    printf("g = %i\n",g); 
    printf("h = %i\n",h);
    printf("j = %i\n",j); 
    printf("i = %i\n",i);
}


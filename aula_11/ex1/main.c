#include <stdio.h>

#define tamanho 3

//Protipos de funcao
double Soma(double v[tamanho], int);

int main(){
    double v[tamanho] = {2,3,5};
    int n = tamanho;
    double soma = Soma(v, n);
    printf("%.0lf", soma);
    return 0;
}

//Definicao
double Soma(double v[tamanho], int n){
    if(n == 1){
        return v[0];
    }else{
        return Soma(v, n-1) + v[n-1];
    }
}


#include <stdio.h>

#define tamanho 3

//Protipos de funcao
int busca_linear(int x, int *v, int n);

int main(){
    int v[tamanho] = {2,3,5};
    int n = tamanho;
    int x = 6;
    int busca = busca_linear(x, v, n);
    printf("%i", busca);
    return 0;
}

//Definicao
int busca_linear(int x, int *v, int n){
    if(v[n-1] == x){
        return n-1;
    }else{
        if(n == 1){
            if(v[n-1] == x) {
                printf("cheguei aqui");
                return n-1;
            }else{
                return -1;
            }
        }else{
            return busca_linear(x, v, n-1);
        }
    }
}


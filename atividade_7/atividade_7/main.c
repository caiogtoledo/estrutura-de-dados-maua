#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//NOME: Caio Kurek Marques Manuel   RA: 20.01383-3
//NOME: Caio Toledo                 RA: 20.01430-9
//NOME: Vinicius Soares             RA: 20.02137-2

void LerString(char s[]);

int main(){
    int n;
    int i_novo = 0;
    char texto[100];
    char novoTexto[100];

    printf("Numero de criptografia: ");
    scanf("%i", &n);

    printf("Digite o texto: ");
    LerString(texto);

    //printf("%c", texto[0]+n);

     for (int i = 0; i < strlen(texto); i++){
          if(texto[i] == ' '){
              novoTexto[i_novo] = texto[i];

          }
          else if(texto[i]>=65 && texto[i]<=90){
            if(texto[i] + n > 90){
             // printf("%c", texto[i]+n-26);
              novoTexto[i_novo] = texto[i]+n-26;
          }
            else{
                novoTexto[i_novo] = texto[i]+n;
            }
          }
          else if(texto[i]>=97 && texto[i]<=122){
            if(texto[i] + n > 122){
             // printf("%c", texto[i]+n-26);
              novoTexto[i_novo] = texto[i]+n-26;
          }
            else{
                novoTexto[i_novo] = texto[i]+n;
            }
          }
            i_novo++;

     }
     novoTexto[i_novo] = '\0';
     printf("%s\n",novoTexto);
    return 0;
}

void LerString(char s[]){
    fflush(stdin);
    scanf("%[^\n]s", s);
   // printf(s);
   // printf("\n");
}

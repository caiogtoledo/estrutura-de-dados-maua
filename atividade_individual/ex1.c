// ex1

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// int x = 2;
//     printf("O valor de x = %i", x);
//     return 0;
// }


// ex2

// #include <stdio.h>
// #include <stdlib.h>

// int minhaFuncao(int x)
// {
//     int i;
//     return x+1;
// }

// int main()
// {
//     int i, x=2;

//     x = minhaFuncao(x);
// printf("O valor de x = %i", x);
//     return 0;
// }

//3

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {

// int i;
// char frase[] = "Cada palavra em uma linha.";

// for (i=0; i<strlen(frase); i++)
// {

// if (frase[i]==' '){
//     frase[i]='\n';
// }

// }

// printf("Escrevendo uma palavra por linha:\n%s",frase);

// return 0;

// }

//4

// #include <stdio.h>
// #include <stdlib.h>
// #define TAMANHO_VETOR 5

// //Protótipo das funções
// void LerVetor(int vetor[TAMANHO_VETOR]);
// void MostraVetor(int VetordeEntadas[TAMANHO_VETOR]);
// void ProdutoEscalar(int vetor1[TAMANHO_VETOR], int vetor2[TAMANHO_VETOR]);

// int main()
// {
// int VetordeEntadas[TAMANHO_VETOR];
// LerVetor(VetordeEntadas);
// printf("Vetor de Entradas:\n");
// MostraVetor(VetordeEntadas);
// int VetordePesos[TAMANHO_VETOR];
// LerVetor(VetordePesos);
// printf("Vetor de Pesos:\n");
// MostraVetor(VetordePesos);
// ProdutoEscalar(VetordeEntadas,VetordePesos);

// return 0;

// }
// void LerVetor(int vetor[TAMANHO_VETOR]) {
//     for(int contador = 0; contador < TAMANHO_VETOR; contador++){
//         printf("Informe a posicao[%i]:", contador);
//         scanf("%i", &vetor[contador]);
//     }
// }

// void MostraVetor(int vetor[TAMANHO_VETOR]) {
//     for(int contador = 0; contador < TAMANHO_VETOR; contador++){
//         printf("[%i]:%i\n", contador, vetor[contador]);
//     }
// }

// void ProdutoEscalar(int vetor1[TAMANHO_VETOR], int vetor2[TAMANHO_VETOR]) {
//     int produto = 0;
//     for(int contador = 0; contador < TAMANHO_VETOR; contador++){
//         produto=produto+vetor1[contador]*vetor2[contador];

//     }
//     printf("O Produto Escalar dos vetores é: %i:", produto);
// }

//5

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>


// void LerString(char[]);


// int main()
// {

// char senha[]="ABCD";
// char tentativa[20];
// int errou=1;   /* 0 se acertou ou 1 se errou */
// int numErros=0; /* definir o valor inicial para numErros */

//  	/*verifica se errou*/ 	 	/*verifica a variável "numErros"*/ 	 
// while(	(errou!=0) &&(numErros<3))
// {

// printf("Entre com a senha: ");
// LerString(tentativa);
// errou=strcmp(senha,tentativa);   /* armazena na variável "errou" a comparação entre a senha e a tentativa */
// if (errou)  
//     numErros++;             /*incrementa o num. de erros*/
// }

// if (errou)
//     printf("Excedeu o numero de tentativas.");
// else
//     printf("Acertou a senha.");

// return 0;
// }
// void LerString(char s[]){
//     fflush(stdin);
//     scanf("%[^\n]s", s);
// }

//7

// #include <stdio.h>
// #include <stdlib.h>

// int color_id;
// int R;
// int G;
// int B;
// int valores[3];

// int main(){
//     printf("digite um valor inteiro entre 0 e 255 para o R:");
//     scanf("%i", &R);
//     printf("digite um valor inteiro entre 0 e 255 para o R:");
//     scanf("%i", &G);
//     printf("digite um valor inteiro entre 0 e 255 para o R:");
//     scanf("%i", &B);

//     if(R >= 127){
//         valores[0] = 1;
//     }else{
//         valores[0] = 0;
//     }

//     if(G >= 127){
//         valores[1] = 1;
//     }else{
//         valores[1] = 0;
//     }

//     if(B >= 127){
//         valores[2] = 1;
//     }else{
//         valores[2] = 0;
//     }

//     color_id = valores[0]*4 + valores[1]*2 + valores[2]*1;

//     switch (color_id)
//         {
//         case 0:
//             printf("Preto\n");
//             break;

//         case 1:
//             printf("Azul\n");
//             break;

//         case 2:
//             printf("Verde\n");
//             break;

//         case 3:
//             printf("Ciano\n");
//             break;

//         case 4:
//             printf("Vermelho\n");
//             break;

//         case 5:
//             printf("Magenta\n");
//             break;

//         case 6:
//             printf("Amarelo\n");
//             break;

//         case 7:
//             printf("Branco\n");
//             break;

//         default:
//             printf("Opcao invalida");
//             break;
//     }
// }


//6

// #include <stdio.h>
// #include <stdlib.h>

// int a;
// int b;
// int valor_medio;
// int e;
// e = 10**(-10);

// int main(){
//   valor_medio = abs(a-b);

//   while (a>e && );
// }
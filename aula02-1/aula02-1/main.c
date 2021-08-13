//
//  main.c
//  aula02-1
//
//  Created by Caio Toledo on 26/02/21.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    printf("Hello, World!\n");
    int idade;
    printf("Informe sua idade:");
    scanf("%i", &idade);
    printf("Caio\nvocê tem: %i anos \n", idade);
    int ano_atual;
    //pegar ano atual https://stackoverflow.com/questions/5141960/get-the-current-time-in-c
    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    ano_atual = timeinfo->tm_year + 1900;
    printf("Ano atual %i \n", ano_atual);
    
    if(ano_atual % 2 != 0){
        printf("Ano atual é ímpar\n");
    }else{
        printf("Ano atual é par\n");
    }
    while(idade > 0){
            printf("Em %i eu levei %i puxões de orelha!\n", ano_atual, idade);
            ano_atual = ano_atual - 1;
            idade -= 1;
        }
    return 0;
}

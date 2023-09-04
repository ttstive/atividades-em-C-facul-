#include <stdlib.h>


 int main() {

    char *mes [] = {"janeiro", "fevereiro", "março", "abril", "maio", 
    "junho", "julho", "agosto", 
    "setembro", "outubro", "novembro", "dezembro"};

    char continuar;
    int numero_mes;

do
{
 

 

    printf("Insira um valor de 1 a 12: ");
    scanf("%d", &numero_mes);

        
        if (numero_mes >= 1 && numero_mes <= 12) {
            char *nome_mes = mes[numero_mes -1];

            printf("é o mes de %s\n",  nome_mes);
        }
        else{
            printf("o numero inserido nao eh valido, tente novamente");
        }
        printf("Deseja continuar (s/n)? ");
        scanf(" %c", &continuar); 
       
    } while (continuar == 's' || continuar == 'S');
   

    return 0;

 }
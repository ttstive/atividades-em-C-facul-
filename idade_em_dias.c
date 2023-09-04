#include <stdio.h>

int main() {
    int mes, dias, anos;
    char continuar;

do{

    printf("insira um valor em dias\n\n");
    scanf("%d", &dias);


    anos = dias/365;
    dias %= 365;

    mes = dias/30;
    dias %= 30;

    printf("o valor dos dias corresponde ao total de \n %d ano(s), %d meses e  %d dias \n", anos, mes, dias);

       
    printf("Deseja continuar (s/n)? ");
        scanf(" %c", &continuar); 

} while (continuar == 's' || continuar == 'S');
   

    return 0;

}


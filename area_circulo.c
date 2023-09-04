#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){

    float n;
    char nome [50], continuar;
    int raio;
    float area;


 do {
    printf("\n\n insira seu nome:");
    scanf("%s", &nome);
    printf("ola : %s, insira qualquer valor e eu vou calcular a area do circulo ", nome);
    scanf("%d", &raio);
    

    n = 3.14159;
    area = n* raio * raio ;
    printf("raio : %f ", area);
    printf("Deseja continuar (s/n)? ");
    scanf(" %c", &continuar); 

    } while (continuar == 's' || continuar == 'S');

    return 0;
}



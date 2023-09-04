#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, num3, num4, produto;
    char continuar;

    do {
        printf("Insira o valor 1: ");
        scanf("%d", &num1);

        printf("Insira o valor 2: ");
        scanf("%d", &num2);

        printf("Insira o valor 3: ");
        scanf("%d", &num3);

        printf("Insira o valor 4: ");
        scanf("%d", &num4);

        produto = (num1 * num2) - (num3 * num4);

        printf("O valor do cálculo do produto é: %d\n", produto);

        printf("Deseja continuar (s/n)? ");
        scanf(" %c", &continuar); 

    } while (continuar == 's' || continuar == 'S');

    return 0;
}


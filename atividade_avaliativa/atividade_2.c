#include <stdlib.h>
#include <stdio.h>

int main (){
    int number;
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf(" %d eh numero par \n", number);
    }
    else {
        printf(" %d eh numero impar \n ", number);
    }
    int soma = 0;
    int dividendo = number;
    while (dividendo > 0) {
        soma += dividendo % 10; 
        dividendo = dividendo / 10; 
    }

    printf("a soma dos algarismos de %d eh igual a %d\n", number, soma);




 return 0;
}
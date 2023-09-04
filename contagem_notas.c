#include <stdio.h>

int main() {
    int valor;
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    char continuar;

do
{
 printf("Insira um valor: ");
    scanf("%d", &valor);
    printf("O valor é: %d\n", valor);

    for (int i = 0; i < 7; i++) {
        int quantidade = valor / notas[i];
        valor %= notas[i];
        
        if (quantidade > 0) {
            printf("%d nota(s) de %d\n", quantidade, notas[i]);
        }
       
    } printf("Deseja continuar (s/n)? ");
        scanf(" %c", &continuar); 
} while (continuar == 's' || continuar == 'S');
   

    return 0;
}


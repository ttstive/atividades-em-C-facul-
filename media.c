#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1, nota2, nota3;

    printf("insira 3 notas\n");

    printf("Insira a nota 1\n");
    scanf("%f", &nota1);

    printf("Insira a nota 2\n");
    scanf("%f", &nota2);

    printf("Insira a nota 3\n");
    scanf("%f", &nota3);

    float soma = nota1+nota2 + nota3;
    float media = (nota1+nota2 + nota3)/3;
    
    if (media <=8 && soma <= 24)
    {
        printf("voce passou, mas tente melhorar, nota: %.2f\n\n", media);
    }
    if (media >= 9 )
    {
        printf("muito bem, mantenha seu empenho %.2f foi sua nota \n\n", media);
    }
    else if (media <= 6 )
    {
        printf("te convido para a recuperação\n", media);

        }
    else
    {
        printf("reprovou");
    }
    


 return 0;
}
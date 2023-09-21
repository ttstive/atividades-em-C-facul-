#include <stdlib.h>
#include <stdio.h>

int main (){
    int senha_correta, senha_inserida;
    scanf("%d", &senha_correta);

    while (senha_inserida != senha_correta)
{
    scanf("%d", &senha_inserida);
     if (senha_inserida == senha_correta) {
            printf("senha valida!\n");

        } else {
            printf("senha invalida!\n");
        }
    }
    


    return 0;
}


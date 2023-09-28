#include <stdlib.h>
#include <stdio.h>

int main (){
    int senha_correta, senha_que_foi_inserida;
    scanf("%d", &senha_correta);
    printf("senha cadastrada: %d\n", senha_correta);

    while (senha_que_foi_inserida != senha_correta)
{
    scanf("%d", &senha_que_foi_inserida);
     if (senha_que_foi_inserida == senha_correta) {
            printf("senha valida!\n");

        } else {
            printf("senha invalida!\n");
        }
    }
    


    return 0;
}


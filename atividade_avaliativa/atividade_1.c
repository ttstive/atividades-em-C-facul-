#include <stdlib.h>
#include <stdio.h>

int main (){
    int ano;
    scanf("%d", &ano);

    if ((ano >= 1886 && ano <=2022) && (ano %4 == 0) && (ano != 1916) && (ano!= 1940) && (ano != 1944)) {
        printf("Os jogos Olimpicos de verao ocorreram no ano de %d.\n", ano);
    }
    
    else if (ano >= 1930 && (ano - 1930) % 4 == 0 && (ano != 1942) && (ano != 1946)) {
        printf("A Copa do Mundo de futebol ocorreu no ano de %d.\n", ano);
    } 
    else{
        printf(“Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d");
    }
   

    return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){

    float combustivel, distancia, consumoMedio;
    char nome [50], continuar;
  


 do {
    printf("\n\n insira o nome do veiculo:");
    scanf("%s", &nome);
    printf("%s, bom carro, insira a distancia percorrida ", nome);
    scanf("%f", &distancia);
    printf(" insira a quantidade de gasolina que foi gasta \n\n");
    scanf("%f", &combustivel);

    consumoMedio = distancia/combustivel;
    

    printf(" \n\n %.2f litros, \n foi a quantidade de combustivel", combustivel);
    printf("\n\n distancia : %.2f km \n\n", distancia );
    printf("\n\n media do consumo de gasolina: %f km/l", consumoMedio);

    printf("\n\nDeseja continuar (s/n)? ");
    scanf(" %c", &continuar); 

    } while (continuar == 's' || continuar == 'S');

    return 0;
}

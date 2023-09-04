#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("INSIRA O TEMPO EM SEGUNDOS");
    scanf("%d", &segundos);

    horas = segundos/3600;
    segundos %= 3600;

    minutos = segundos/60;
    segundos %= 60;

    printf("\n\n valores formatados: %02d \n\n :%02d \n\n :%02d\n", horas, minutos, segundos);

    
    
    
    
    return 0;}
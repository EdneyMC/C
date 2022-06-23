#include <stdlib.h>
#include <stdio.h>

int main (){

    float a, b, apoioTrocaValor;

    printf("\nTROCA DE VALORES");
    printf("\nInsira um valor para A: ");
    scanf("%f", &a);
    printf("Insira outro valor para B: ");
    scanf("%f", &b);
    printf("\nVALORES INSERIDOS:");
    printf("\nA = %.2f", a);
    printf("\nB = %.2f", b);

    apoioTrocaValor=a;
    a=b;
    b=apoioTrocaValor;

    printf("\n\nVALORES SUBSTITUIDOS:");
    printf("\nA = %.2f", a);
    printf("\nB = %.2f", b);

    return 0;
}
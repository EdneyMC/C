#include<stdio.h>
#include<stdlib.h>

int main() {

    //Declaração de variáveis
    float fahrenheit, celsius;

    //Titulo do programa
    printf("\nCONVERSAO DE TEMPERATURA GRAUS FAHRENHEIT PARA GRAUS CELSIUS\n");

    //Interação com o usuário
    printf("\nInsira uma temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    //Fórmula para conversão de temperatura
    celsius = ((fahrenheit-32)*5)/9;

    //Apresentação do resultado
    printf("\nA temperatura em graus Celsius eh: %0.1f graus C.\n", celsius);
}
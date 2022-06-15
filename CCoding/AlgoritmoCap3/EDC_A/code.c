//compilação = gcc -o "nome arquivo executável" .\"nome do arquivo atual"
//inciar app = .\code.exe
#include <stdio.h>
#include <conio.h>

int main(){
    float celsius, fahrenheit;

    printf("Insira uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9*celsius+160)/5;

    printf("A temperatura em fahrenheit eh: %0.2f graus F", fahrenheit);
    return 0;
}


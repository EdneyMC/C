#include <stdio.h>
#include <conio.h>

int main(){

    int a, b, result;
   

    printf("Insira o primeiro valor inteiro:\n");
    scanf("%d", &a);
    printf("Insira o segundo valor inteiro:\n");
    scanf("%d", &b);

    result = (a>b) ? a-b : b-a;
    printf("\nDiferenca entre o maior e o menor valores inseridos: %d\n", result);

    /*
    if (a>b){
        resultado = a - b;
    }else{
        resultado = b - a;
    }
    printf("\nDiferenca entre o maior e o menor valores inseridos: %d\n", resultado);
    */
    return 0;
}


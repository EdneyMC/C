#include <stdio.h>

int main(){

    int n;

    printf("Insira um valor interiro: ");
    scanf("%i", &n);

    n = (n<0) ? n*-1 : n;
    printf("Resultado: %i", n);

    return 0;
}
#include<stdio.h>

int main() {

    float n1, n2, n3, n4, md;

    printf("Insira a primeira nota: ");
    scanf("%f", &n1);
    printf("\nInsira a segunda nota: ");
    scanf("%f", &n2);
    printf("\nInsira a terceira nota: ");
    scanf("%f", &n3);
    printf("\nInsira a quarta nota: ");
    scanf("%f", &n4);

    md = ((n1 + n2 + n3 + n4)/4);

    if (md>=5) {
        printf("APROVADO");
    }else{
        printf("REPROVADO");
    };
    printf("\n%.2f", md);
   
    return 0;
}
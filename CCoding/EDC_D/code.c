#include <stdio.h>

int main() {

    float n1, n2, n3, n4, ne, md1, md2;

    printf("Insira a primeira nota do aluno: ");
    scanf("%f", &n1);
    printf("\nInsira a segunda nota do aluno: ");
    scanf("%f", &n2);
    printf("\nInsira a terceira nota do aluno: ");
    scanf("%f", &n3);
    printf("\nInsira a quarta nota do aluno: ");
    scanf("%f", &n4);
   
    md1 = (n1 + n2 + n3 + n4)/4;

    if (md1>=7) {
        printf("\nAPROVADO");
        printf("\nNota media: %.2f\n", md1);
    }else {
        printf("\nNota media: %.2f\n", md1);
        printf("\nInsira a nota de EXAME do aluno: ");
        scanf("%f", &ne);
        md2 = (md1+ne)/2;
        if (md2>=5){
            printf("\nAPROVADO EM EXAME\n");
        }else{
            printf("\nREPROVADO");
        };
        printf("\nNota media apos EXAME: %.2f\n", md2);
    };
    return 0;
}
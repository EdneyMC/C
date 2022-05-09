#include <stdio.h>
#include <stdlib.h>

int main(){

    int x=1;
    int a=3;
    int b=5;
    int c=8;
    int d=7;
    char result;

    //a
    result = !(x>3);
    printf("Resultado: %d", result);

    //b
    result = (x<1)&!(b>d);
    printf("\nResultado: %d", result);

    //c
    result = !(d<0)&(c>5);
    printf("\nResultado: %d", result);

    //d
    result = !(x>3)||(c<7);
    printf("\nResultado: %d", result);

    //e
    result = (a>b)||(c>b);
    printf("\nResultado: %d", result);

    //f
    result = (x>=2);
    printf("\nResultado: %d", result);

    //g
    result = (x<1)&&(b>=d);
    printf("\nResultado: %d", result);

    //h
    result = (d<0)||(c>5);
    printf("\nResultado: %d", result);

    //i
    result = !(d>3)||!(b<7);
    printf("\nResultado: %d", result);

    //j
    result = (a>b)||!(c>b);
    printf("\nResultado: %d", result);
}
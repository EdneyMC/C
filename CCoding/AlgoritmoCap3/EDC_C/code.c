#include<stdlib.h>
#include<stdio.h>

float calcPotencia(float rTamBase, int e){
    if (e == 0)
        return 1;
    else    
        return rTamBase * calcPotencia(rTamBase, e-1);
}

int main(){

    float rTamBase, hTamAltura, volumeCm3, volumeMt3, volumeLt;
    const float pi=3.14159;
    int e=2;

    printf("\nCALCULO DE AREA DE CILINDRO E CONVERSAO EM LITROS\n");
    printf("\nInsira em centimetros (cm), o tamanho do raio da base do cilindro (Dica: raio=diametro da base / 2): ");
    scanf("%f", &rTamBase);
    printf("Insira em centimetros (cm), o tamanho da altura do cilindro: ");
    scanf("%f", &hTamAltura);

    volumeCm3 = pi * calcPotencia(rTamBase, e) * hTamAltura;
    // ou com a bilbiotéca #include<math.h> volume = pi * pow(rTamBase) * hTamAltura;
    
    volumeMt3 = volumeCm3 / 1000000;

    volumeLt = volumeMt3 * 1000;

    printf("\nO volume total do cilindro em centimetros cubicos eh: %.2f cm3.\n", volumeCm3);
    printf("\nO volume total do cilindro em metros cubicos eh: %.8f mt3\n", volumeMt3);
    printf("\nO volume total do cilindro em litros eh: %.3f lt(s).\n", volumeLt);

    return 0;
}
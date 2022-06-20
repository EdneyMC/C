#include<stdio.h>
#include<stdlib.h>

int main (){

    float tempoMin, velMediaKmHora, tempoSeg, velMediaKmSeg, distPercorrida, consumoLitro;
    const float kmLitro=12;

    printf("\nCALCULO CONSUMO  DE COMBUSTIVEL POR VIAGEM\n");
    printf("\nInsira o tempo de duracao da viagem (minutos): ");
    scanf("%f", &tempoMin);
    printf("\nInsira a velocidade media realizada na viagem (km/h): ");
    scanf("%f", &velMediaKmHora);

    tempoSeg=tempoMin*60;

    velMediaKmSeg=velMediaKmHora/3600;

    distPercorrida=tempoSeg*velMediaKmSeg;

    consumoLitro=distPercorrida/kmLitro;

    printf("\nRESUMO DA VIAGEM");
    printf("\nVelocidade media: %.0f km/h.", velMediaKmHora);
    printf("\nTempo gasto: %.0f minuto(s).", tempoMin);
    printf("\nDistancia percorrida: %.1f km.", distPercorrida);
    printf("\nQuantidade de combustivel utilzada: %.1f litro(s).\n", consumoLitro);

    return 0;
}
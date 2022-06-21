#include <stdlib.h>
#include <stdio.h>

int main(){

    float valorOrigBoleto, taxaJurosSimples, boletoAtualizado;
    int tempoAtraso;

    printf("\nCALCULO DE JUROS SIMPLES DE PRESTACOES EM ATRASO");
    printf("\nInsira o valor original da prestacao em atraso: ");
    scanf("%f", &valorOrigBoleto);
    printf("Insira o total de dias corridos, desde um dia apos o vencimento da parcela ate a data atual: ");
    scanf("%i", &tempoAtraso);
    printf("Insira a taxa de juros ao dia, informada no campo observacoes do boleto: ");
    scanf("%f", &taxaJurosSimples);

    boletoAtualizado=valorOrigBoleto+(valorOrigBoleto*(taxaJurosSimples/100)*tempoAtraso);

    printf("\nO valor atualizado da parcela para pagamento hoje eh: %0.2f\n\n", boletoAtualizado);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

//Função para calcular a potência de um número;
//São criadas na memória, funções para cada uma das possibilidades e resolvidas após o último resultado recursivo chegar a zero. 
float calcPotencia(float b, int e){
    if (e == 0)
        return 1;
    else    
        return b * calcPotencia(b, e-1);
}

//Função para calcular Delta.
float calcDelta(float a, float potencia, float c){
    float delta = potencia-4*a*c;
    printf("Delta: %.2f\n", delta);
    return delta;
}

//Função que calcula raiz quadrada exata (quadrado perfeito).
float calcRaizQuadExata(float radicando){
    
    float rad=radicando, raiz=0, radNumImpar=1;
    float radMais, raizMenos=0, radMenosNumImpar=1, radicandoMenos=radicando;
    float radMenos, raizMais=0, radMaisNumImpar=1, radicandoMais=radicando, limitRadicandoMais;

    while (rad>=radNumImpar){
        rad -= radNumImpar;
        radNumImpar += 2;
        raiz += 1;
    } 

    if (rad!=0){
        //Encontra número com raiz quadrada exata abaixo de delta (parâmetro radicando)
        radicandoMenos -= 1;
        for (float i=radicandoMenos; i>=0; i--){
            while (radicandoMenos>=radMenosNumImpar){
                radicandoMenos -= radMenosNumImpar;
                radMenosNumImpar += 2;
                //teste: printf("B Radicando: %f - %f - %f\n", i, radicandoMenos, radMenosNumImpar);
            } if (radicandoMenos == 0){
                radicandoMenos = i+1;
                break;
            } else {
                radMenosNumImpar=1;
                radicandoMenos=i;
            }
        }

        //Encontra número com raiz quadrada exata acima de delta (parâmetro radicando)
        limitRadicandoMais = radicandoMais + (radicando - radicandoMenos);
        radicandoMais += 1;
        for (float i=radicandoMais; i<=limitRadicandoMais; ++i){
            while (radicandoMais>=radMaisNumImpar){
                radicandoMais -= radMaisNumImpar;
                radMaisNumImpar += 2;
                //teste: printf("B Radicando: %f - %f - %f\n", i, radicandoMais, radMaisNumImpar);
            } if (radicandoMais == 0){
                radicandoMais = i;
                break;
            } else {
                radMaisNumImpar=1;
                radicandoMais=i;
            }
        }

        if ((radicando-radicandoMenos)<=(radicandoMais-radicando)){
            radMenos=radicandoMenos;
            raizMenos=0;
            radMenosNumImpar=1;
            while (radMenosNumImpar<=radMenos){
                radMenos -= radMenosNumImpar;
                radMenosNumImpar += 2;
                raizMenos += 1;
            }
            raizMenos = ((radicando+radicandoMenos)/(2*raizMenos));
            raiz=raizMenos;
            printf("Raiz Quadrada: %.4f\n", raiz);
            return raiz;
        } else {
            radMais=radicandoMais;
            raizMais=0;
            radMaisNumImpar=1;
            while (radMaisNumImpar<=radMais){
                radMais -= radMaisNumImpar;
                radMaisNumImpar += 2;
                raizMais += 1;
            }
            raizMais = ((radicando+radicandoMais)/(2*raizMais));
            raiz=raizMais;
            printf("Raiz Quadrada: %.4f\n", raiz);
            return raiz;
        }
    } else {
        printf("Raiz Quadrada: %.4f\n", raiz);
        return raiz;
    }
}

//Funcão para calculo da fórmula de Bhaskara
float calcBhaskara(float b, float raiz, float a){
    float x1, x2;
    x1=(-b+raiz)/(2*a);
    x2=(-b-raiz)/(2*a);
    printf("x1: %.2f\nx2: %.2f", x1, x2);
}

int main() {
    
    float a, b, c, potencia, delta, raiz;
    const int e=2;

    printf("Digite o valor para a: ");
    scanf("%f", &a);
    printf("Digite o valor para b: ");
    scanf("%f", &b);
    printf("Digite o valor para c: ");
    scanf("%f", &c);

    //chama função que calcula potência
    potencia=calcPotencia(b,e);

    //Chama função que calcula a fórmua Delta.
    delta=calcDelta(a, potencia, c);

    //Chama função que calcula raiz quadrada exata
    //Pode ser utilizada a biblioteca math.h -> sqrt, para cálculo da raiz, ex: raiz=sqrt(delta).
    raiz=calcRaizQuadExata(delta);

    //Chama função que calcula a fórmula de Bhaskara.
    calcBhaskara(b, raiz, a);
 
    return 0;
}


//TODO:
//Reduzir quantidade de variáveis;

/*TODO: Criar função única que calcEquacaoSegGrau
Reduzir as funções acima (potencia, delta, raiz quadrada e bhaskara em uma única função)
*/

  /*TODO: Criar lógica para raiz quadarada não exata
    1- Aproximada por falta (antes de chegar no radicando)
    2- Aproximada por excesso (após passar do radicando)
    link: https://www.youtube.com/watch?v=Szvng3VV_SQ
    */



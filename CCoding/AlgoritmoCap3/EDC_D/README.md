# Calcular Consumo De Combustível Por Viagem

- [ok] 1. Apresentar o nome da solução, através da interação com o usuário "CALCULO CONSUMO  DE COMBUSTIVEL POR VIAGEM"

- [ok] 2. Ler um valor para o tempo gasto, através da interação com o usuário "Insira o tempo de duração da viagem (minutos): ", estânciando a variável "tempoMin";

- [ok] 3. Ler um valor para a velocidade média na viagem, através da interação com o usuário "Insira a velocidade média realizada na viagem (km/h): ", estânciando a variável "velMediaKmHora";

- [ok] 4. Estânciar a constante "kmLitro" com o valor 12;

- [ok] 5. Calcular a conversão do valor da veriável "tempoMin" para tempo em segundos, tempoSeg <- tempoMin * 60, estânciando a variável "tempoSeg";

- [ok] 6. Calcular a conversão do valor da variável "velMediaKmHora" para velocidade média por segundo, velMediaKmSeg <- velMediaKmHora / 3600, estânciando a variável "velMediaKmSeg".

- [ok] 7. Calcular distPercorrida <- tempoSeg * velMediaKmSeg, estânciando a variável "distPercorrida;

- [ok] 8. Calcular consumoLitro <- distPercorrida / kmLitro;

- [] 9. Apresentar dados e informações através da interação título "RESUMO DA VIAGEM";

- [] 10. Apresentar dado através da interação "Velocidade média: %.0f km/h.", através da variável "velMediaKmHora";

- [] 11. Apresentar dado através da interação "Tempo gasto: %.0f minuto.", através da variável "tempoMin";

- [] 12. Apresentar dado através da interação "Distância percorrida: '%.1f km.", através da variável "distPercorida";

- [] 13. Apresentar informação através da interação "Quantidade de combustível utilzada: %.1f litro(s).", através da variável "consumoLitro";


//TODO:
 - [ ] 1. Interar com usuário o valor de consumo de combustível (km/Lt) devido a variação de consumo por veículos, rodagem como urbana (sinaleiro, trânsito lento, etc...) e rodagem rodoviária (sem sinaleiros, tansito rápido, alta velocidade, etc...);

 - [ ] 2. Interar com usuário a hora de partida, chagada, etc.., para através de fórmulas da física melhorar a inteligencia do software;
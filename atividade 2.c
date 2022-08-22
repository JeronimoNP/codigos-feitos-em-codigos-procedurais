/*
2) Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um
automóvel que faz 12 quilômetros por litro. Para obter o cálculo, 
o usuário deve fornecer o tempo gasto (variável TEMPO) e a velocidade média (variável VELOCIDADE) durante a viagem.
Desta forma, será possível obter a distância percorrida com a fórmula DISTÂNCIA +-- TEMPO *
VELOCIDADE. A partir do valor da distância, basta calcular a quantidade de litros de combustível
utilizada na viagem com a fórmula LITROS_USADOS +-- DISTÂNCIA/ 12. O programa deve
apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida e a
quantidade de litros utilizada na viagem.
*/

#include <stdio.h>
//variaveis
float d, li, t, vm;
//comando secundario
void calculo(void){
    d = t*vm;
    li = d/12;
}
//comando principal
int main()
{
    printf("Digite o tempo gasto em horas: ");
    scanf("%f", &t);
    printf("Digite a velocidade media: ");
    scanf("%f", &vm);
    calculo();
    printf("o resultado sera:\n");
    printf("quantidade de gasolina consumida: %.2f\n", li);
    printf("a distancia percorrida foi de: %.2f\n", d);
    printf("tempo de viagem gasta: %.2fh\n", t);
    printf("velocidade media: %.2f\n", vm);
}

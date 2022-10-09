#include <stdio.h>
#include <stdlib.h>

int main()
{
    float comprimento, largura,precoCarpete, metroQuad,metroCarpete, custoTotal;

    printf("Informe o comprimento da sala (em metros) ");
    scanf("%f", &comprimento);

    printf("Informe a largura da sala (em metros) ");
    scanf("%f", &largura);

    printf("Informe o preco do carpete ");
    scanf("%f", &precoCarpete);

    metroQuad = comprimento*largura;

    custoTotal = metroQuad*precoCarpete;

    printf("O custo total e: %0.2f", custoTotal);


    return 0;
}

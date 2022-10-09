#include <stdio.h>
#include <stdlib.h>

int main()
{

    float valorDepositado, valorRendimento, jurosFixo = 0.007;

    printf("Informe o valor depositado ");
    scanf("%f", &valorDepositado);

    valorRendimento = valorDepositado*jurosFixo;

    printf("O rendimento no mes e %0.2f", valorRendimento);


    return 0;
}

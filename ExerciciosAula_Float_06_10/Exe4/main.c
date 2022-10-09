#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salLiqui, salario1, numTrab, valorHora, descontoINSS;

    printf("Informe o valor da hora trabalhada ");
    scanf("%f", &valorHora);

    printf("Informe seu numero de horas trabalhadas ");
    scanf("%f", &numTrab);
    if(valorHora > 0 && numTrab > 0){
    salario1 = valorHora * numTrab;

    descontoINSS = salario1*0.1;

    salario1 = salario1 - descontoINSS;

    printf("Seu salario liquido e %0.2f", salario1);
    }
    else{
        printf("Valor invalido");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, IMC;

    printf("Insira seu peso\n");
    scanf("%f",&peso);
    printf("Insira sua altura (em metros)\n");
    scanf("%f",&altura);

    IMC = peso/(altura*altura);

    if(peso > 0 && altura > 0){
   printf("Seu IMC é %0.2f", IMC);
}
    else{
        printf("Por favor, tente novamente");
    }
    return 0;
}

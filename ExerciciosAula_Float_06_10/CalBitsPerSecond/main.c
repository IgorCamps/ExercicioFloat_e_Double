#include <stdio.h>
#include <stdlib.h>
int main()
{

    float valorBit, velBit, tempo;


    printf("Insira o valor do arquivo (em bits)\n");
    scanf("%f",&valorBit);

    if(valorBit > 0){
    printf("Insira a velocidade conexão (em bits por segundo)\n");
    scanf("%f",&velBit);

    if(velBit > 0 ){
    tempo = valorBit/velBit;
    printf("O tempo é %0.2f %s", tempo, "segundos");
        }
    else{
        printf("Erro");
        }
    }

    else{
        printf("erro");
    }
    return 0;
}


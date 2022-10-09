#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempCel, fahenheit;


    printf("Insira a temperatura em Celsius\n");
    scanf("%f", &tempCel);

    fahenheit = (9*tempCel+160)/5;

    printf("A temperatura em Fahrenheit e %0.2f", fahenheit);
    return 0;
}

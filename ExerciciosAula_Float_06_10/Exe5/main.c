#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;

    printf("Insira um numero real\n");
    scanf("%f", &a);

    printf("Sua parte inteira e %i\n",(int) a);
    b = a-(int)a;
    printf("Sua parte fracionaria e %0.2f",b);
    return 0;
}

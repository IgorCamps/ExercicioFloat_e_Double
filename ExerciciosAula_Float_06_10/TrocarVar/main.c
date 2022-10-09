#include <stdio.h>
#include <stdlib.h>

int main()
{
    char carc1, carc2,a, b,troca;


    printf("Insira uma caractere\n");
    scanf("%c", &a);
  //scanf("%*[^\n]");
    scanf("%*c");

    printf("Insira outra caractere\n");
    scanf("%c",&b);

    troca = a;
    a = b;
    b = troca;

    printf("Os valores invertidos sao %c\n",a);
    printf("Os valores invertidos sao %c\n", b);
    return 0;
}

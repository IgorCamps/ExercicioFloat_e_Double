#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, nota4, media;

    printf("Informe sua primeira nota ");
    scanf("%f", &nota1);

    printf("Informe sua segunda nota ");
    scanf("%f", &nota2);

    printf("Informe sua terceira nota ");
    scanf("%f", &nota3);

    printf("Informe sua quarta nota ");
    scanf("%f", &nota4);
    if(nota1>=0 && nota1<=10 && nota2>=0 && nota2<=10 && nota3>=0 && nota3<=10 && nota4>=0 && nota4<=10){
    media = (nota1+nota2+nota3+nota4)/4;

    printf("Sua média é %0.1f", media);
    }
    else{
        printf("Nota invalida");
    }
    return 0;
}

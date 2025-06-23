#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, nota4, media = 0;

    printf("Digite a Primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite a Segunda nota: ");
    scanf("%f",&nota2);

    printf("Digite a Terceira nota: ");
    scanf("%f",&nota3);

    printf("Digite a Quarta nota: ");
    scanf("%f",&nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("a media é: %.2f", media);
}

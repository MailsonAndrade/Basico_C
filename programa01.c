#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int numero, soma = 0;

    for(int i = 0; i < 5; i++){
    printf("informe um numero: ");
    scanf("%d",&numero);

    soma = soma + numero;

    }


    printf("A soma é %d", soma);

    return 0;
}

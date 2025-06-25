#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Utiliza quando você precisa de um loop
onde não tenha um numero fixo de elementos
mas que tenha um criterio de parada e
antes de iniciar o loop a condição é checada.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int numero, soma = 0;

    printf("informe um numero: ");
    scanf("%d", &numero);

    while(numero != 0){
       soma = soma + numero;

       printf("informe um numero: ");
       scanf("%d",&numero);
    }


    printf("A soma é %d", soma);
    return 0;
}



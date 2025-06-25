#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int numero, soma = 0;

    do{

       printf("informe um numero: ");
       scanf("%d",&numero);

       soma = soma + numero;
    }while(numero != 0);


    printf("A soma é %d", soma);
    return 0;
}




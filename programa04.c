#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa que determine e mostre os cincos primeiros
m�ltiplos de 3, considerando n�meros maiores 0.

*/


int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int numero = 1;
    int contador = 0;

    printf("Apresentando os 5 primeiros multiplos de 3: \n");
    while(contador < 5){
        if(numero % 3 == 0){
            printf("O numero %d � multiplo de 3.\n", numero);
            contador = contador + 1;
        }
        numero = numero + 1;

    }
    return 0;
}

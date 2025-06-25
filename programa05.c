#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Escreva um programa que declare um inteiro, inicialize-o
incremente-o de 100 em 100. imprimindo seu valor na tela
até que seu valor seja 100000 (cem mil).
*/


int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int numero = 0;
    for(int numero = 0; numero <= 100000; numero = numero + 100){
        printf("O valor de numero é %d\n", numero);

    }





    return 0;
}


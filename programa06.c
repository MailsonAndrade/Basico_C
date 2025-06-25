#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
Faça um programa que leia 10 números e escreva o maior
e o menor lido
*/

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int numero, maior, menor = 0;

    for(int i = 0; i < 10; i++){
        printf("Informe o valor %d de 10: ",i + 1);
        scanf("%d",&numero );

        if(i == 0){
            maior = numero;
            menor = numero;
        }
        if(numero > maior){
            maior = numero;
        }
        if(numero < menor){
            menor = numero;
        }
    }
    printf("O maior valor é %d e o menor valor é %d ", maior, menor );

    return 0;
}

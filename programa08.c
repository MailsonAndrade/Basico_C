#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i = 1; i <= 10; i++){
        printf("Tabuada do %d:\n ",i);
        for(j = 1; j <= 10; j++){
            printf("Tabuda do %d X %d\n",i,j,i * j);
        }
        printf("\n");
    }
    return 0;
}

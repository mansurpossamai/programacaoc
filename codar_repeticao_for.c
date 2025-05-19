#include <stdio.h>

int main (){

int numero, i;

    printf("digite um numero para calcular a tabuada \n1");
    scanf("%d", &numero);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d \n" , i, numero , i * numero);
    }
    





    return 0;
}
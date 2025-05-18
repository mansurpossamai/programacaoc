#include <stdio.h>

int main(){

    int numero = 4, resultado;

    resultado = numero % 2;
    printf("a variavel resultado e: %d\n",resultado);

    if(numero % 2 == 0){
        printf("o numero e par\n");
    }
}
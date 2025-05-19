#include <stdio.h>

int main(){
int numero;
do
{
   printf("digite um numero par para sair do programa...\n");
   scanf("%d", &numero);
   if(numero % 2 == 0){
    printf("%d e par!\n", numero);
   }else {
    printf("%d e impar!\n",numero);
   } /* code */
} while (numero % 2 != 0);

    printf("voce saiu do programa...");


return 0;
}
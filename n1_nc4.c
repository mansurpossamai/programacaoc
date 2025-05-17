#include <stdio.h>

int main (){
    int idade = 25;
    int quantidade = 1; // numeros inteiros
    float altura = 1.75; // casas decimais
    char letra = 'A'; //armagena uma letra
    double peso ; // maior capacidade de armagemaneto de casas decimais
    char nome[20] = "mansur"; // armagena palavras porem deve colocar valor do tamanho maximo
    char opcao = 'S';

    printf("a idade do %s é: %d\n",nome ,idade);
    printf("a altura é: %.2f\n", altura); // se eu quiser limitar as casas decimais devo colocar o numero antes do f exempro (%.2f)
    printf("a opcao é: %c\n", opcao);




}
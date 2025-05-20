#include <stdio.h>

int main (){

    float notas[3] = {85.5, 90.0, 78.3};

    printf("nota do aluno 1 é: %.1f \n", notas[0]);
    printf("nota do aluno 2 é: %.1f \n", notas[1]);
    printf("nota do aluno 3 é: %.1f \n", notas[2]);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

char *nomes [] = "alice","bob","carol";


for (int i = 0; i < 3; i++){

        printf("%S \n", nomes [i]);
}

    

}
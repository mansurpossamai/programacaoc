#include <stdio.h>

int main(){

int index;

char * nomesAlunos [3][2]= {

    {"aluno0","pt:30, mat:90"},
    {"aluno1","pt:60, mat:60"},
    {"aluno2","pt:90, mat:30"}
};
printf("digite o numero do aluno que queira ver as notas \n");
printf("para o aluno 0, digite 0 \n");
printf("para o aluno 1, digite 1 \n");
printf("para o aluno 2, digite 2 \n");

scanf("%d",&index);

printf (" a nota do %s  sao: %s , %s \n", nomesAlunos[index][0],nomesAlunos[index][1],nomesAlunos[index][2]);

    return 0;
}
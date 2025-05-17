#include<stdio.h>

int main (){

    int Populacao, Populacao2, Turisticos, Turisticos2; //%d
    float Area, Area2, PIB, PIB2; //%f
    char Estado[50] ,Estado2[50], Cidade[50], Cidade2[50], Carta[50], Carta2[50]; //%s

    printf("digite o Estado: \n");
    scanf("%s",Estado);

    printf("digite o Codigo da Carta \n");
    scanf("%s",Carta);

    printf("digite o Nome da Cidade \n");
    scanf("%s",Cidade);

    printf("Digite o Tamanho da População \n");
    scanf("%d",&Populacao);
    
    printf("digite a Àrea em Km² \n");
    scanf("%f",&Area);
    
    printf("Qual é o PIB \n");
    scanf("%f",&PIB);

    printf("Qual é o Numero de Pontos Turísticos \n");
    scanf("%d",&Turisticos);
//fim da primeira cidade

    printf("nome do Primeiro Estado: %s - Numero da Carta: %s - Nome da Cidade: %s\n", Estado,Carta,Cidade);
    printf("Possui uma Pupulação de : %d - Numero de Pontos Turísticos: %d\n",Populacao,Turisticos);
    printf("Possui uma Àrea de: %f - E PIB de: %f\n",Area,PIB);

    printf("digite o Estado2: \n");
    scanf("%s",Estado2);

    printf("digite o Codigo da Carta2 \n");
    scanf("%s",Carta2);

    printf("digite o Nome da Cidade2 \n");
    scanf("%s",Cidade2);

    printf("Digite o Tamanho da População \n");
    scanf("%d",&Populacao2);

    printf("digite a Àrea em Km² \n");
    scanf("%f",&Area2);

    printf("Qual é o PIB \n");
    scanf("%f",&PIB2);

    printf("Qual é o Numero de Pontos Turísticos \n");
    scanf("%d",&Turisticos2);


printf("nome do Segundo Estado: %s - Numero da Carta 2: %s - Nome da Cidade 2: %s\n", Estado2,Carta2,Cidade2);
    printf("Possui uma Pupulação de : %d - Numero de Pontos Turísticos: %d\n",Populacao2,Turisticos2);
    printf("Possui uma Àrea de: %f - E PIB de: %f",Area2,PIB2);


    return 0;
}
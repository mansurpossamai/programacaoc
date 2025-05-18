#include<stdio.h>

int main (){

    int Populacao, Populacao2, Turisticos, Turisticos2; //%d
    float Area, Area2, PIB, PIB2; //%f
    char Estado[50] ,Estado2[50], Cidade[50], Cidade2[50], Carta[50], Carta2[50]; //%s
    double densidade, pib_per_capita, densidade2, pib_per_capita2;

    printf("digite o nome do Estado: \n");
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


    printf("nome do Primeiro Estado: %s - Numero da Carta: %s - Nome da Cidade: %s\n", Estado,Carta,Cidade);
    printf("Possui uma Pupulação de : %d - Numero de Pontos Turísticos: %d\n",Populacao,Turisticos);
    printf("Possui uma Àrea de: %f - E PIB de: %f\n",Area,PIB);

    if (Area != 0) {
        densidade = Populacao / Area;
        printf("Densidade populacional: %.2f hab/km²\n", densidade);
    } else {
        printf("Erro: a área não pode ser zero.\n");
    }
     if (Populacao != 0) {
        pib_per_capita = PIB / Populacao;
        printf("PIB per capita: R$ %.2f\n", pib_per_capita);
    } else {
        printf("Erro: a população não pode ser zero.\n");
    }

//fim da primeira cidade

    printf("digite o nome do segundo estado: \n");
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
    printf("Possui uma Àrea de: %f - E PIB de: %f \n",Area2,PIB2);


 if (Area != 0) {
        densidade2 = Populacao2 / Area2;
        printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    } else {
        printf("Erro: a área não pode ser zero.\n");
    }
     if (Populacao2 != 0) {
        pib_per_capita2 = PIB2 / Populacao2;
        printf("PIB per capita: R$ %.2f\n", pib_per_capita2);
    } else {
        printf("Erro: a população não pode ser zero.\n");
    }

printf("PIB per capita da Carta 1 - %s :%f\n", Cidade,pib_per_capita);
printf("PIB per capita da carta 2 - %s :%f\n", Cidade2,pib_per_capita2);

 if (pib_per_capita> pib_per_capita2) {
        printf("Resultado: A carta 1 - %s Venceu.\n",Cidade);
        printf("Diferença: R$ %.2f\n", pib_per_capita - pib_per_capita2);
    } else if (pib_per_capita2 > pib_per_capita) {
        printf("Resultado: A Carta 2 - %s Venceu.\n",Cidade2);
        printf("Diferença: R$ %.2f\n", pib_per_capita2 - pib_per_capita);
    } else {
        printf("Resultado: As duas cartas %s - %s têm o mesmo PIB per capita.\n",Cidade, Cidade2);
    }

    return 0;
}
/*
A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre
o salário e número de filhos. Faça um procedimento que leia esses dados para um número não
determinado de pessoas, calcule e exiba a média de salário da população (a condição de parada
deve ser um flag com salário negativo). Faça um programa que acione o procedimento
*/

#include <stdio.h>

float mediasalario(void) {

    int count=0;
    float media, totsal=0, salario=0;

    while (scanf("%f %d", &salario) && salario>=0)
    {
        totsal += salario;
        count ++;
    }
    media = totsal/count;
    
    printf("%.2f", media);
}



int main()
{
    mediasalario();

    return 0;
}
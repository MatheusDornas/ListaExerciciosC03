/*
Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função
deve retornar um valor lógico (true ou false). Faça um programa que lê N números e para cada
um deles exibe uma mensagem informando se ele é positivo ou não, dependendo se foi retornado
verdadeiro ou falso pela função. Lembre-se de que zero não é positivo.
*/

#include <stdio.h>
#include <stdbool.h>

int funcao(void){

    int n;
    bool positivo;

    scanf("%d", &n);
    if (n>0)
    {
        positivo = true;
    }
    else
    {
        positivo = false;
    }

    return positivo;
}

int main(){

    int N;

    scanf("%d", &N);

    for(N; N>0; N--)
    {
        if (funcao() == true)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    }

    return 0;
}
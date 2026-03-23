/*
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de
S, calculado segundo a fórmula abaixo.
S = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
Faça um programa que leia N e imprima o valor retornado pela função
*/
#include <stdio.h>

float S(void){

    int N, fat=1, i, j;
    float soma=1;

    scanf("%d", &N);
    
    for (i=1; i<=N; i++)
    {

        fat=i;
        j = i-1;

        for(; j>0; j--)
        {
            fat *= j;
        }
        soma += (1.0/fat);
    }
    printf("%f", soma);
}

int main(){
    S();
}
/*
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de
S, calculado segundo a fórmula abaixo.
S = ... + (n^2 + 1)/(n + 3)
Faça um programa que leia N e imprima o valor retornado pela função.
*/

#include <stdio.h>
#include <math.h>

double parametro(void) {
    int N, i;
    double S=0;

    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        S += ((pow(i,2))+1)/(i+3);
    }
    
    return S;
}

int main(){

    printf("%lf", parametro());
    
}
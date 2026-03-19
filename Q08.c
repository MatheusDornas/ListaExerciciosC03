/*
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de
S, calculado segundo a fórmula abaixo.
S = ... + (n^2 + 1)/(n + 3)
Faça um programa que leia N e imprima o valor retornado pela função.
*/

#include <stdio.h>
#include <math.h>

float parametro(void) {
    int N, i;
    float S;

    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        S += (pow(i,2)+1)/(i+3);
    }
    printf("%f", S);
}

int main(){
    parametro();
}
/*
Faça uma função que lê um número determinado de notas de alunos, calcula e retorna a média
das notas dos alunos aprovados (nota maior ou igual a 6). Faça um programa que lê o número
de alunos e imprime a média retornada pela função.
*/

#include <stdio.h>

float notas(int n) {

    int count;
    float media=0, soma=0, nota;

    for(n; n>0; n--)
    {
        scanf("%f", &nota);
        if (nota >= 6)
        {
            soma += nota;
            count++;
        }
    }
    media = soma/count;
    
    return media;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%.1f", notas(n));
}
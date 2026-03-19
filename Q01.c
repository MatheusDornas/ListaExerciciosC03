/*Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra
for ‘A’, o procedimento calcula e escreve a média aritmética das notas do aluno, se for ‘P’, calcula
e escreve a sua média ponderada (pesos: 5, 3 e 2). Faça um programa que leia 3 notas de N
alunos e acione o procedimento para cada aluno. (N deve ser lido do teclado)*/

#include <stdlib.h>
#include <stdio.h>

float media(float N1, float N2, float N3, char TIPO){
    printf("%.2f\n", (TIPO == 'A')?(N1+N2+N3)/3:(N1*5+N2*3+N3*2)/10);
}

int main (){

    float n1, n2, n3;
    int i;
    char tipo;

    scanf("%d", &i);
    for (i; i>0; i--)
    {
        scanf("%f%f%f %c", &n1, &n2, &n3, &tipo);
        media(n1, n2, n3, tipo);
    }
    return 0;    
}
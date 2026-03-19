/*
Faça um procedimento que recebe a média final de um aluno, identifica e exibe o seu conceito,
conforme a tabela abaixo. Faça um programa que leia a média de N alunos, acionando o proce-
dimento para cada um deles. (N deve ser lido do teclado)
Até 39      F
40 a 59     E
60 a 69     D
70 a 79     C
80 a 89     B
A partir de 90 A
*/

#include <stdio.h>

float conceito(void) {
    float n, media;

    scanf("%f", &n);

    for(n; n>0; n--)
    {
        scanf("%f", &media);
        if(media <= 39)
        {
            printf("F\n");
        }
        else if(media >= 40 && media <= 59)
        {
            printf("E\n");
        }
        else if(media >= 60 && media <= 69)
        {
            printf("D\n");
        }
        else if(media >= 70 && media <= 79)
        {
            printf("C\n");
        }
        else if(media >= 80 && media <= 89)
        {
            printf("B\n");
        }
        if(media >= 90)
        {
            printf("A\n");
        }
    }
}

int main(){
    conceito();
}
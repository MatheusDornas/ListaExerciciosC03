/*
Escreva um procedimento que recebe 3 valores reais X, Y e Z e que verifique se esses valores podem
ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é o tipo de triângulo
formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja
satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do comprimento
dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando
as seguintes definições:
• Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
• Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais.
• Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
Faça um programa que leia um número indeterminado (até lado negativo) de triângulos (valores
dos 3 lados) e para cada triângulo, acione o procedimento.
*/

#include <stdio.h>

float trig(void) {
    float X, Y, Z;

    while(scanf("%f %f %f", &X, &Y, &Z) && X>0)
    {
        if (X+Y > Z && X+Z > Y && Y+Z > X)
        {
            if (X == Y && Y == Z)
            {
                printf("TRIANGULO EQUILATERO\n");
            }
            else if (X == Y || X == Z || Z == Y)
            {
                printf("TRIANGULO ISOSCELES\n");
            }
            else if (X != Y && X != Z && Z != Y)
            {
                printf("TRIANGULO ESCALENO\n");
            }
        }
        else
        {
            printf("NAO TRIANGULO\n");
        }
    }
}

int main()
{
    trig();
}
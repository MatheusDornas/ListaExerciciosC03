/*
Faça um procedimento que recebe 3 valores inteiros por parâmetro e os exiba em ordem crescente.
Faça um programa que leia N conjuntos de 3 valores e acione o procedimento para cada conjunto.
(N deve ser lido do teclado)
*/

#include <stdio.h>

int valores(void){

    int n1, n2, n3, extra;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1>n2)
    {
        extra = n1;
        n1 = n2;
        n2 = extra;
    }
    if (n1>n3)
    {
        extra = n1;
        n1 = n3;
        n3 = extra;
    }
    if (n2>n3)
    {
        extra = n2;
        n2 = n3;
        n3 = extra;
    }
    printf("%d %d %d\n\n", n1, n2, n3);
    }

int main()
{
    int i;
    
    scanf("%d", &i);

    for (; i>0; i--)
    {
        valores();
    }
}

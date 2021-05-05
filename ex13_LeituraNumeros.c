#include <stdio.h>
#include <math.h>

/*
Faça um programa que leia 5 números e informe o maior número.
*/

int main()
{
    int numero;
    int maior =  -1 * INFINITY; 

    for(int contagem = 0; contagem < 5; contagem++){
        printf("Leia o numero: ");
        scanf("%i", &numero);
        if(numero > maior)
        {
            maior = numero;
        }
    }
    printf("Maior numero: %i", maior);
}
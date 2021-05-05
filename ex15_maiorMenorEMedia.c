#include <stdio.h>
#include <math.h>

/**
 * Faça um programa que leia 5 números e informe o maior, menor e a média dos
números.
*/

int main()
{
    int numero;
    int menor = INFINITY; 
    int maior = -1 * INFINITY; 
    int soma = 0;
    float media;

    for(int contagem = 0; contagem < 5; contagem++){
        printf("Leia o numero: ");
        scanf("%i", &numero);
        if(numero < menor)
        {
            menor = numero;
        }
          if(numero > maior)
        {
            maior = numero;
        }
        soma += numero;
    }
    media = soma / 5.0;

    printf("Menor numero: %i, Maior numero: %i, , Media: %f", menor, maior, media);
}
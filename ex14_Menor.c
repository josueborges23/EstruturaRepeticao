#include <stdio.h>
#include <math.h>

int main()
{
    int numero;
    int menor = INFINITY; 

    for(int contagem = 0; contagem < 5; contagem++){
        printf("Leia o numero: ");
        scanf("%i", &numero);
        if(numero < menor)
        {
            menor = numero;
        }
    }
    printf("Menor numero: %i", menor);
}
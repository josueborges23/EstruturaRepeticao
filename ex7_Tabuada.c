#include <stdio.h>

int main()
{

    int multiplicador;
    int produto;

    printf("Digite o multiplicador: ");
    scanf("%d", &multiplicador);    
        
    printf("Tabuada de %d:\n", multiplicador);

    for(int multiplicando = 1 ; multiplicando <= 10 ; multiplicando++)
    {
        produto = multiplicador * multiplicando;
        printf("%d x %d= %d\n", multiplicando, multiplicador, produto);
    }        
}
#include <stdio.h>
#include <math.h>
/*
Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120
*/

int main(void)
{      
        int numero;
        printf("Digite um numero: \n");
        scanf("%d", &numero);

        printf("%d!=", numero);
        
        if(numero<16){    
        do
        {        
            int saida=1;

            for (int i = numero; i > 1; i--)
            {   
                saida = saida * i;          
                printf("%i.",i);                    
            }
            printf("1=%d",saida);
            } 
        }
        while (numero!=0);

        return 0;
}
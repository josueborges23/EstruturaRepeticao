#include <stdio.h>

/*
Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade de
números pares e a quantidade de números ímpares.
*/

int main(){

    int numerosPares = 0;
    int numerosImpares = 0;

    int numeroEscolhido;

    for (int contagem = 0 ; contagem < 10; contagem++ )        
    {
        printf("Digite um numero: ");
        scanf("%d", &numeroEscolhido);  

        int restoPorDois = numeroEscolhido % 2;
        
        if(restoPorDois == 0)
        {
            numerosPares++;
        } 
        else
        {
            numerosImpares++;
        }  
    }

    printf("Quantidade de numeros pares: %d\n Quantidade de numeros impares: %d\n", numerosPares, numerosImpares);   
}
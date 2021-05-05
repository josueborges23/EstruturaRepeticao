#include<stdio.h>

/*
*Faça um programa que leia 5 números e informe a soma e a média dos números.
*/

int main(void){

    float soma = 0;
    float numero;

    for(int i = 0 ; i < 5; i++)
    {        
        printf("Digite o proximo numero: ");
        scanf("%f", &numero); 
        soma += numero;
    }    
    
    float media = soma / 5;
    printf("Media dos numeros: %f ", media);

return 0;
}

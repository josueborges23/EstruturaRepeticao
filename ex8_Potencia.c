#include <stdio.h>

/*
Faça um programa que peça dois números, base e expoente, calcule e mostre o
primeiro número elevado ao segundo número. Não utilize a função de potência da
linguagem.
*/

int main(){

    float base;
    float expoente;    

    printf("Digite a base: ");
    scanf("%f", &base);    
    printf("Digite o expoente: ");
    scanf("%f", &expoente); 


    float resultado = base;

    for(int contagem = 1; contagem < expoente; contagem++)
    {
        resultado = resultado * base;
    }

    printf("%.0f elevado a %.0f e igual a: %.0f", base, expoente, resultado);

}
#include <stdio.h>

/*
Supondo que a população de um país A seja da ordem de 80000 habitantes com
uma taxa anual de crescimento de 3% e que a população de B seja 200000
habitantes com uma taxa de crescimento de 1.5%. Faça um programa que calcule e
escreva o número de anos necessários para que a população do país A ultrapasse
ou iguale a população do país B, mantidas as taxas de crescimento.
*/

int main(){

    int populacaoInicialA = 80000;
    float taxaAnualCrescimentoA = 3.0;

    int populacaoInicialB = 200000;
    float taxaAnualCrescimentoB = 1.5;

    int populacaoAtualA = populacaoInicialA;
    int populacaoAtualB = populacaoInicialB;

    int anosDecorridos = 0;
   
    int crescimentoDaPopulacaoA; 
    int crescimentoDaPopulacaoB; 

    while(populacaoAtualA < populacaoAtualB)        
    {
        crescimentoDaPopulacaoA = populacaoAtualA * (taxaAnualCrescimentoA / 100); 
        crescimentoDaPopulacaoB = populacaoAtualB * (taxaAnualCrescimentoB / 100); 

        populacaoAtualA += crescimentoDaPopulacaoA;
        populacaoAtualB += crescimentoDaPopulacaoB;   

        printf("Crescimento da populacao A: %d \n", crescimentoDaPopulacaoA);
        printf("Crescimento da populacao B: %d \n", crescimentoDaPopulacaoB);         
        printf("Populacao A: %d \n", populacaoAtualA);
        printf("Populacao B: %d \n", populacaoAtualB);     

        anosDecorridos++;
    }

    printf("Populacao A sera maior que populacao de B apos %d anos", anosDecorridos);   
}
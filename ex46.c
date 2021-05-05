#include <stdio.h>
#include <string.h>
#include <math.h>

#define TAM 5

/*
Em uma competição de salto em distância cada atleta tem direito a cinco saltos. 
No final da série de saltos de cada atleta, o melhor e o pior resultados são eliminados.
O seu resultado fica sendo a média dos três valores restantes. Você deve fazer um programa que receba 
o nome e as cinco distâncias alcançadas pelo atleta em seus saltos e depois informe a média dos saltos 
conforme a descrição acima informada (retirar o melhor e o pior salto e depois calcular a média).
Faça uso de uma lista para armazenar os saltos. Os saltos são informados na ordem da execução, 
portanto não são ordenados. O programa deve ser encerrado quando não for informado o nome do atleta.
A saída do programa deve ser conforme o exemplo abaixo:
*/

int main()
{


char nome[61];
float notas[TAM]={0,0,0,0,0};

float melhorSalto = -INFINITY;
float piorSalto = INFINITY;

float notaTemp;
float somaDemaisNotas;

float media;

do
{
    printf("Digite o nome do atleta: \n");
    scanf("%s", &nome);
    

    for(int i=0; i < 5 ; i++)
    {
        printf("Digite o %i a nota: \n", (i + 1));
        scanf("%f", &notaTemp);
        notas[i] = notaTemp;
    }

    printf("Nome: %s \n", nome);

   
    printf("Primeiro salto: %f\n", notas[0]);
    printf("Segundo salto: %f\n", notas[1]);
    printf("Terceiro salto: %f\n", notas[2]);
    printf("Quarto salto: %f\n", notas[3]);
    printf("Quinto salto: %f\n", notas[4]);
   
 

    for(int i=0; i < 5 ; i++)
    {
        if( notas[i] > melhorSalto ){
            melhorSalto == notas[i];
        }
        else if(notas[i] < piorSalto){
            piorSalto == notas[i];
        }         
    }

    // printf("A %i nota e: %i\n", (i + 1), notas[i]);    

  

     for(int i=0; i < 5 ; i++)
    {
        if( notas[i] > melhorSalto){
            melhorSalto == notas[i];
        }
        else if(notas[i] < piorSalto){
            piorSalto == notas[i];
        }         
    }

       for(int i=0; i < 5 ; i++)
    {
        
        if(notas[i] != melhorSalto || notas[i] != piorSalto )
        {
        somaDemaisNotas += notas[i];
        }
    }

    printf("Melhor salto: \n", melhorSalto);
    printf("Pior salto: \n", piorSalto);

    media = somaDemaisNotas / 3;
    printf("Média demais notas: &f \n", somaDemaisNotas);
    
    for(int i=0; i<5 ; i++)
    {
    nome[i] == '\0';
    }
}
while (strcmp(nome,"sair"));
}


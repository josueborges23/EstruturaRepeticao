#include<stdio.h>

/**Eu quero ler 10 números e exibir o resultado da soma deles. */

int main(void){

    int contador = 1;
    float soma = 0;

    while (contador <= 10)
    {
        float numeroAtual;
        printf("Favor digitar proximo numero: ");
        scanf("%f", &numeroAtual);
        soma = soma + numeroAtual;
        contador++;
    }

    /**
     * while (enquanto) - um tipo de laço utilizado quando você não sabe quantas vezes o seu laço vai executar
     * for (para) - é utilizado justamente quando você sabe quantas vezes vai executar. 
    */

    /*contador = 1;
    while( contador <= 10 ){
        contador++; 
    }*/

    //for( declaração e inicialização do contador; condição de repetição; incremento do contador )
    for(int contador = 1; contador <= 10; contador++){

    }

    printf("Soma dos numeros: %f", soma);
    
    return 0; 
}
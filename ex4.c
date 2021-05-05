/**
 * 4. Faça um programa que leia indefinidos (controlado por sentinela) números inteiros até que o usuário informe 0
para sair do programa. Exiba o somatório dos números lidos.
 * 
 * */
#include<stdio.h>
int main(){

    int numero;
    int soma = 0; 

    /*while (numero != 0)
    {
        printf("Digite o valor do numero: ");
        scanf("%d", &numero);
        soma = soma + numero; 
    }*/

    do 
    {
        printf("Digite o valor do numero: ");
        scanf("%d", &numero);
        soma = soma + numero; 
    } while(numero != 0);


    printf("A soma dos numeros foi %d", soma); 

    /** 
     * 
     * While (Enquanto) controlado por contador. 
     *  Nesse tipo de repetição você sabe exatamente a quantidade de vezes que o seu laço vai ser executado. 
     *  Geralmente, você sabe o valor_inicial e valor_final do intervalo. 
     *  Você repete enquanto o contador que começa com valor_inicial não chegar ao valor_final. 
     * 
     * A repetição do While(Enquanto) orientada a sentinela é baseada em um valor de parada também chamado de sentilena. 
     * Nesse tipo de repetição você não sabe quantas vezes o laço será executado, mas você com que valor o laço deixa de 
     * executar. 
     * Geralmente, as condiçõe são escritas com operadores de igual e desigualdade. 
     * 
     * Sintaxe:
     *  while (variavel_controle != sentinela){
     *      //bloco de código
     *  }
     * 
     *   while(variavel_controle == sentinela){
     *      //bloco de código   
     *   }
     *   
     *   while(numero != 0){
     * 
     *   }
     * 
     *   1 e 5
     *   
    */




    return 0; 
}
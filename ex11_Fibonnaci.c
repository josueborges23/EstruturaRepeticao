#include <stdio.h>

/*
A série de Fibonacci é formada pela seqüência 0,1,1,2,3,5,8,13,21,34,55,... Faça um
programa que gere a série até que o valor seja maior que 500.
*/

int main(){

    int numeroAnterior = 1;
    int numeroAtual = 1;
    int soma = 0;

    printf("numAnterior\t\tnumAtual\t\tsoma\n");
    printf("%d\t\t\t%d\t\t\t%d\n", numeroAnterior, numeroAtual, soma);
    
    /// 0,1,1,2,3,5,8,13,21,34,55,...
    while(soma <= 10)
    { 
      printf("%d\t\t\t%d\t\t\t%d\n", numeroAnterior, numeroAtual, soma);
      numeroAnterior = numeroAtual;
      printf("%d\t\t\t%d\t\t\t%d\n", numeroAnterior, numeroAtual, soma);
      numeroAtual = soma;
      printf("%d\t\t\t%d\t\t\t%d\n", numeroAnterior, numeroAtual, soma);
      soma =  numeroAtual + numeroAnterior;
    }

    /**
     *  numAnterior   numAtual    soma    terminal
     *      1             -         -       X
     *      1             1         -       X
     *      1             1         0       X
     *      1             1         2       X
     *      1             1         2       2\n 
     *      1             1         2       2\n
     *      1             2         2       2\n
     *      1             2         3       2\n
     *      1             2         3       2\n 3\n
     *      2             2         3       2\n 3\n
     *      2             3         3       2\n 3\n
     *      2             3         5       2\n 3\n
     *      2             3         5       2\n 3\n 5\n
     *      3             3         5       2\n 3\n 5\n
     *      3             5         5       2\n 3\n 5\n
     *      3             5         8       2\n 3\n 5\n 
     *      3             5         8       2\n 3\n 5\n 8\n
     *      5             5         8       2\n 3\n 5\n 8\n
     *      5             8         8       2\n 3\n 5\n 8\n
     *      5             8         13       2\n 3\n 5\n 8\n
     *      5             8         13       2\n 3\n 5\n 8\n 13\n
     *      8             8         13       2\n 3\n 5\n 8\n 13\n
     *      8             13        13       2\n 3\n 5\n 8\n 13\n
    */
}
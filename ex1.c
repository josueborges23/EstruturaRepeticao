
    #include <stdio.h>
    int main()
    {
/**
 * Imprima todos os números de 0 a 20 (cada número por linha)
*/

        int contador = 0;

        while(contador <= 20){
            printf("%d\n", contador);
            contador += 1;
        }
        printf("\n");
        //você testou isso?

/**
 * Imprima todos os números de 0 a 20 (um ao lado do outro)
*/

        contador = 0;

        while(contador <= 20){
            printf("%d ", contador);
            contador += 1;
        }
        printf("\n");

/***
 * Imprima todos os números pares de 0 a 60 (não pode usar if)
*/


        contador = 0;

        while(contador <= 60){
            printf("%d ", contador);
            contador = contador + 2;
        }
        printf("\n");

/**
 * Imprima todos os números ímpares de 0 a 60 (não pode usar if)
*/

        contador = 1;

        while(contador <= 60){
            printf("%d ",contador);
            contador = contador + 2;
        }
        printf("\n");

/**
 * Imprima todos os números múltiplos de 3 entre 0 e 100 (não pode usar if)
*/

        contador = 1;
        int saida = 0;
        while( saida < 100 ){
            printf("%d ",saida);
            saida = contador * 3;
            contador = contador + 1;
        }
        printf("\n");
        contador = 0;
        while(contador <= 100){
            printf("%d ", contador);
            contador = contador + 3; 
        }
}


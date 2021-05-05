#include <stdio.h>
int main()
{
    int valorSaque;

    /**
     * As estruturas de repetição, também chamadas de loops (laços), tem por objetivo repetir um mesmo trecho de código
     * DEFINIDAS ou INDEFINIDAS vezes.
     * 
     * GO TO - porco, dificulta a manutenção do código e insere uma quantidade de pontos de erros ou falhas.
     * 
     * Serviu também para substituir o comando GOTO em várias linguagens. 
     * 
     * Laços é auxiliar na manutenção de trechos de código que são executados várias vezes. 
     * 
     * */ 

    /**
     * while é um loop dos três loops disponíveis na linguagem C e na maioria das linguagens. 
     * Repetir enquanto a condição for verdadeira. 
     * while - enquanto em inglês. 
     * 
     * Sintaxe:
     * 
     *  while (condicao) { //repete enquanto a condição for verdadeira. 
     *      //bloco de código
     *  }
     * 
     *  enquanto (condicao for verdadeira) faça 
     *  {
     *    // bloco de codigo
     *  }
     * 
     *  loop controlado por contador
     *  loop controlado por valor de sentinela
     * 
    */

    // variavel contadora
    // tipo contador = valor_inicial; 
    int contador = 1;

    while (contador <= 5)
    {
        printf("Digite o valor a sacar:");
        scanf("%i", &valorSaque);
        
        if( valorSaque >= 10 && valorSaque <= 600 ) 
        {
            int notasCem, notasCinquenta, notasDez, notasCinco, notasUm;
            int valorRestanteSaque = valorSaque;

            notasCem = valorRestanteSaque / 100;
            valorRestanteSaque = valorRestanteSaque % 100;
            notasCinquenta = valorRestanteSaque / 50;
            valorRestanteSaque = valorRestanteSaque % 50;
            notasDez = valorRestanteSaque / 10;
            valorRestanteSaque = valorRestanteSaque % 10;
            notasCinco = valorRestanteSaque / 5;
            notasUm = valorRestanteSaque % 5;
            
            printf("Notas de 100: %i\n", notasCem);
            printf("Notas de 50: %i\n", notasCinquenta);
            printf("Notas de 10: %i\n", notasDez);
            printf("Notas de 5: %i\n", notasCinco);
            printf("Notas de 1: %i\n", notasUm);
        } 
        
        /**
         * Atribuição: (= simbolo)
         * 
         * 
         * contador = contador + valor_incremento; contagem crescente
         * 
         * valor_incremento - é um valor fixo que somamos ao resultado anterior. 
         * Também é chamado de passo de incremento. 
         * 
         * Decremento: 
         * 
         * contador = contador - valor_decremento; contagem descrescente. 
         * 
        */
        contador = contador + 1;
        /**
         * contador = contador + valor_incremento;
         * contador += valor_incremento; 
         * contador -= valor_decremento;
         * contador *= valor_produto; 
         * contador /= valor_divisor; 
         * 
         * contador = contador + 1;
         * contador += 1; 
         * contador++; 
         * ++contador; 
        */
    }

}

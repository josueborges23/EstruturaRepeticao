#include <stdio.h>

/**
  *Faça um programa que exiba o seguinte menu:
-----------------------------------------------------
TABAJARA EMPRESA DE CAFÉ
-----------------------------------------------------
1 - CADASTRAR TIPO DE CAFÉ

2 - CADASTRAR VENDEDOR
3 - EXIBIR TIPOS DE CAFÉ.
0 - SAIR
----------------------------------------------------
INFORME SUA OPÇÃO: 0
O programa deve imprimir o menu exceto quando a opção 0 for inserida. Se o
usuário informar um número fora das opções de menu, a seguinte mensagem deve ser
exibida: “OPÇÃO INVÁLIDA. POR FAVOR, ESCOLHA UMA DAS OPÇÕES DISPONÍVEIS
NO MENU”. O menu deve então ser impresso novamente, aguardando a leitura da opção.
Dica: Use o loop do..while.
* 
*/

int main()
{

/**
 * do .. while - é utilizado quando você não sabe quantas vezes o laço vai ser executado, mas você quer executar 
 * pelo menos uma vez o conteúdo antes de fazer o teste da condição de repetição. 
 * 
 * Geralmente utilizado para menus e validação de conteúdo. 
*/



int opcaoEscolhida;

 do
  {    
    printf("TABAJARA EMPRESA DE CAFÉ\n");
    printf("-----------------------------------------------------\n");
    printf("1 - CADASTRAR TIPO DE CAFÉ\n");
    printf("2 - CADASTRAR VENDEDOR\n");
    printf("3 - EXIBIR TIPOS DE CAFÉ.\n");
    printf("0 - SAIR\n");
    printf("-----------------------------------------------------\n");
    printf("INFORME SUA OPÇÃO: \n");    
    scanf("%d", &opcaoEscolhida);

    if(opcaoEscolhida>3||opcaoEscolhida<0)
    {
    printf("“OPÇÃO INVÁLIDA. POR FAVOR, 
    ESCOLHA UMA DAS OPÇÕES DISPONÍVEIS NO MENU”\n");    
    }  
  }
  while (opcaoEscolhida!=0);
  
  return 0;

}
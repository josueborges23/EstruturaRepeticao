#include<stdio.h>
/*

*/

int main(void){

    int numero1;
    int numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    while (numero1 <= numero2)    
    {
        printf("%d ", numero1);
        numero1++;
    }
    return 0;

}
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

    for (int i = numero1; i <= numero2; i++)    
    {
        printf("%d ", i);
    }

    return 0;
}
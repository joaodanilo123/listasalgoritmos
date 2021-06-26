#include <stdio.h>

int main(){
    int x;
    printf("Digite um número: ");
    scanf("%i", &x);

    if (x > 0)
    {
        printf("maior que 0");
    } else if(x < 0)
    {
        printf("menor que 0");
    } else
    {
        printf("igual a 0");
    }
    
    printf("\n");

    return 0;
}

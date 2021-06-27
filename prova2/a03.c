#include <stdio.h>

int main(){
    int n, counter, soma;
    
    counter = 0;
    soma = 0;

    while (counter < 10)
    {   
        printf("Digite um número: ");
        scanf("%d", &n);

        soma += n;

        counter++;
    }
    
    printf("Soma: %d\n", soma);

}

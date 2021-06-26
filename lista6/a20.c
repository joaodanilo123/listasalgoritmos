#include <stdio.h>

int ehPrimo(int n){

    int counter = n-1;
    int primo = 1;

    while (counter >= 2)
    {   
        if (n % counter == 0)
        {
            return 0;
        }

        counter--;

    }

    return 1; 
}

int main(){
    int vetor[10], count;

    for (count = 0; count < 10; count++)
    {
        printf("Digite um número: ");
        scanf("%d", &vetor[count]);
    }


    printf("Primos: \n");
    for (count = 0; count < 10; count++)
    {
        if (ehPrimo(vetor[count]))
        {
            printf("%d\n", vetor[count]);
        }
    }

    return 0;
}
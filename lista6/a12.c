#include <stdio.h>

int main(){
    int vetor[10], count;

    for (count = 0; count < 10; count++)
    {
        printf("Digite um número: ");
        scanf("%d", &vetor[count]);
    }

    for (count = 0; count < 10; count++)
    {
        if (vetor[count] % 2 == 0)
        {
            printf("%i\n", vetor[count]);
        }   
    }

    return 0;
}
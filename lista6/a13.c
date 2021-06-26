#include <stdio.h>

int main(){
    int vetor[10], count, maior, menor;

    printf("Digite um número: ");
    scanf("%d", &vetor[0]);

    maior = vetor[0];
    menor = vetor[0];

    for (count = 1; count < 10; count++)
    {
        printf("Digite um número: ");
        scanf("%d", &vetor[count]);

        if (vetor[count] >= maior)
        {
            maior = vetor[count];
        }
        if (vetor[count] <= menor)
        {
            menor = vetor[count];
        }
        
    }

    printf("Menor número digitado: %i\n", menor);
    printf("Maior número digitado: %i\n", maior);

    return 0;
}
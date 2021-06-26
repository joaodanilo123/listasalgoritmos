#include <stdio.h>

int main(){
    int vetor[10], count, soma, media;

    soma = 0;

    for (count = 0; count < 10; count++)
    {
        printf("Digite um número: ");
        scanf("%d", &vetor[count]);

        soma = soma + vetor[count];
        
    }

    media = soma/10;

    printf("Média: %i\n", media);
    return 0;
}
#include <stdio.h>

int main(){
    int vetor[2][2], coluna, linha, nimpares;

    nimpares = 0;

    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            printf("Digite um número: ");
            scanf("%d", &vetor[linha][coluna]);
        }
    }

    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {   

            if (vetor[linha][coluna] % 2 != 0)
            {
                printf("%i\n", vetor[linha][coluna]);
                nimpares++;
            }
        }
    }



    printf("Quantidade de ímpares: %i\n", nimpares);
    return 0;
}
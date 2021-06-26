#include <stdio.h>

int main(){
    int vetor[3][4], maior, menor, linha, coluna, iniciado, pmaior[2], pmenor[2];

    iniciado = 0;

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            printf("Digite um número: (%i, %i)",linha, coluna);
            scanf("%d", &vetor[linha][coluna]);

            if (!iniciado)
            {
                maior = vetor[linha][coluna];
                menor = vetor[linha][coluna];
                pmaior[0] = linha; pmaior[1] = coluna;
                pmaior[0] = linha; pmaior[1] = coluna;
                iniciado = 1;
            }
            

        }
    }

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {   
            if (vetor[linha][coluna] >= maior)
            {
                maior = vetor[linha][coluna];
                pmaior[0] = linha; 
                pmaior[1] = coluna;
            }

            if (vetor[linha][coluna] <= menor)
            {
                menor = vetor[linha][coluna];
                pmenor[0] = linha; 
                pmenor[1] = coluna;
            }
        }
    }

    printf("Maior número digitado: %i\n    posição: (%i, %i)\n", maior, pmaior[0], pmaior[1]);
    printf("Menor número digitado: %i\n    posição: (%i, %i)\n", menor, pmenor[0], pmenor[1]);
    
    
    return 0;

}
#include <stdio.h>

int main(){
    int vetor[10], count, n, n_multiplos;


    printf("Digite o número N: ");
    scanf("%d", &n);
    
    n_multiplos = 0;

    for (count = 0; count < 10; count++)
    {
        printf("Digite um número: ");
        scanf("%d", &vetor[count]);
        
        if(vetor[count] % n == 0)
        {
            n_multiplos++;    
        }
    }
    
    printf("Multiplos de N: %i \n", n_multiplos);

    return 0;
}

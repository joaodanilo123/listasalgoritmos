#include <stdio.h>

int main(){
    int vector[10], counter, sum, avg, biggerThanAvg;

    sum = 0;
    biggerThanAvg = 0;

    for (counter = 0; counter < 10; counter++)
    {
        printf("Digite um número: ");
        scanf("%d", &vector[counter]);

        sum = sum + vector[counter];  
    }

    avg = sum/10;

    for (counter = 0; counter < 10; counter++)
    {
        if (vector[counter] > avg)
        {
            biggerThanAvg++;
        }
          
    }

    printf("Média: %i\n", avg);
    printf("Maiores que a média: %i\n", biggerThanAvg);
    return 0;
}
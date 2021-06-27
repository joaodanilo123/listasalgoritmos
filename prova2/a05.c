#include <stdio.h>

int main(){
    int vector[3][3], line, column, n;

    printf("Digite o número N: ");
    scanf("%d", &n);

    for (line = 0; line < 3; line++)
    {   
        for (column = 0; column < 3; column++)
        {
            printf("Digite um número: ");
            scanf("%d", &vector[line][column]);
        }
    }

    for (line = 0; line < 3; line++)
    {   
        for (column = 0; column < 3; column++)
        {
            if (vector[line][column] % n == 0)
            {
                printf("%d\n", vector[line][column]);
            }
        }
    }
    
    return 0;

}

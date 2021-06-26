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
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("%d\n", ehPrimo(num));

    return 0;
}
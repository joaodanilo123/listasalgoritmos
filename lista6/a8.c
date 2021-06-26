#include <stdio.h>

int main(){
    unsigned int n;
    unsigned long fatorial;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (fatorial = 1; n > 1; n--)
    {   
        fatorial = fatorial * n;
    }
    
    printf("%lli\n", fatorial);
    
    return 0;
}

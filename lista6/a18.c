#include <stdio.h>

long long int fatorial(long long n){
    
    if (n > 1)
    {
        return fatorial(n-1) * n;
    } else
    {
        return 1;
    }
}

int main(){
    long long n;
    
    printf("Digite um número: ");
    scanf("%lld", &n);

    printf("%lld\n", fatorial(n));

    return 0;
}
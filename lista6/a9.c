#include <stdio.h>

int main(){
    int n, contador;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (contador = 0; contador <= 10; contador++)
    {
        printf("%ix%i=%i\n", n, contador, n*contador);
    }
    
    return 0;
}

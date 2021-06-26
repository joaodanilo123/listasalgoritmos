#include <stdio.h>

int main(){
    int soma, n, contador;

    soma = 0;
    for (contador = 0; contador < 10; contador++)
    {
        printf("Digite um número: ");
        scanf("%d", &n);
        soma = soma + n;
    }
    
    printf("Soma dos números digitados: %i \n", soma);

    return 0;
}

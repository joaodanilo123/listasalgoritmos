#include <stdio.h>

int main(){
    int n, contador;

    printf("Digite um número: ");
    scanf("%d", &n);

    contador = n;

    if(n <= 0){
        return 0;
    }

    while (contador <= 100)
    {   
        printf("%i\n", contador);
        contador += n;
    }
    
    
    return 0;
}

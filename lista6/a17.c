#include <stdio.h>

void mostraTabuada(int n){

    for (int i = 0; i <= 10; i++)
    {
        printf("%dx%d=%d\n", n, i, n*i);
    }
}

int main(){
    int num; 
    
    printf("Digite um número: ");
    scanf("%d", &num);

    mostraTabuada(num);

    return 0;
}
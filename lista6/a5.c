#include <stdio.h>

int main(){
    int n1, n2, maior, menor;

    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite um número: ");
    scanf("%d", &n2);

    if(n1 > n2)
    {
        maior = n1;
        menor = n2+1;
    } else if (n1 < n2)
    {
        maior = n2;
        menor = n1+1;
    } else
    {
        return 0;
    }
    

    while (menor < maior)
    {   
        printf("%i\n", menor);
        menor++;
    }
    
    
    return 0;
}

#include <stdio.h>

int main(){
    float n1, n2, n3;

    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite um número: ");
    scanf("%f", &n2);
    printf("Digite um número: ");
    scanf("%f", &n3);

    if (n1 == n2 && n2 == n3)
    {
        printf("os números são iguais");
        return 0;
    }
    

    if (n1 > n2 && n1 > n3)
    {
        printf("%0.2f é maior", n1);
    } else if (n2 > n1 && n2 > n3)
    {
        printf("%0.2f é maior", n2);
    } else if (n3 > n1 && n3 > n2)
    {
        printf("%0.2f é maior", n3);
    }
    
    printf("\n");

    return 0;

}

#include <stdio.h>
#include <string.h>

int main(){
    char uf[2];

    printf("Digite a sigla do seu estado em letras minusculas: ");
    scanf("%s", &uf);

    if(!strcmp(uf, "rj"))
    {
        printf("a. Carioca");
    } else if(!strcmp(uf, "sp"))
    {
        printf("b. Paulista");
    } else if(!strcmp(uf, "mg"))
    {
        printf("c. Mineiro");
    } else
    {
        printf("d. Outros estados");
    }

    printf("\n");
    
    return 0;
}

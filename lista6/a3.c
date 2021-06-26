#include <stdio.h>

int main(){
    float p1, p2, p3, p4, t1, t2, t3, t4;
    double mp, mt, mf;
    int apr = 1;

    printf("Digite a nota da prova 1: ");
    scanf("%f", &p1);
    printf("Digite a nota da prova 2: ");
    scanf("%f", &p2);
    printf("Digite a nota da prova 3: ");
    scanf("%f", &p3);
    printf("Digite a nota da prova 4: ");
    scanf("%f", &p4);
    printf("Digite a nota da trabalho 1: ");
    scanf("%f", &t1);
    printf("Digite a nota da trabalho 2: ");
    scanf("%f", &t2);
    printf("Digite a nota da trabalho 3: ");
    scanf("%f", &t3);
    printf("Digite a nota da trabalho 4: ");
    scanf("%f", &t4);

    mp = (p1+p2+p3+p4)/4;
    mt = (t1+t2+t3+t4)/4;

    mf = (0.8*mp) + (0.2*mt);

    if(mf < 6)
    {
        apr = 0;
    }

    if (apr)
    {
        printf("Aprovado\n");
    } else 
    {
        printf("Não aprovado\n");
    }
    
    return 0;
}

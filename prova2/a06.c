#include <stdio.h>

float calcularIMC(float peso, float altura){
    return peso/(altura*altura); 
}

int main(){
    float p, a;
    
    printf("\n\n\n\n~~~~~~~~~~~~~~~~~~~~ CALCURADORA DE IMC ~~~~~~~~~~~~~~~~~~~~\n");
    
    printf("Digite o peso em quilos: ");
    scanf("%f", &p);
    printf("Digite a altura em metros: ");
    scanf("%f", &a);
    
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Seu IMC é: %0.2f\n", calcularIMC(p, a));
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    return 0;

}
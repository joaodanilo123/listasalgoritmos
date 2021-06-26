#include <stdio.h>
#include <math.h>

int main(){
    float x = 0;

    do
    {
        scanf("%f", &x);
    } while (x <= 0);

    x = sqrt(x);

    printf("%.2F\n", x);
    
    return 0;
}

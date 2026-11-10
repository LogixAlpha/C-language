#include <stdio.h>

//#define PIED_EN_METRE 0.3048
float conversion(float p);
int main()
{
    float p;
    printf("La distance en pied:");
    scanf("%f",&p);
    if (p >=0){
        printf("La distance en metre est : %.3f m",conversion(p));
    }
    else{
        printf("Invalide Distance!");
    }
    return 0;
}

float conversion(float p){
    return p * 0.3048;
}

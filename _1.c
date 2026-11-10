#include <stdio.h>

void somme(float *pa,float *pb){
    printf("a= %f \nb= %f \n",*pa,*pb);
    float s = *pa + *pb,p=*pa * *pb;
    printf("La somme est : %.2f \nLe produit est: %.2f",s,p);}
int main(void)
{
    float a,b,c;
    printf("La valeur de a et b : ");
    scanf("%f %f",&a,&b);
    somme(&a,&b);
    return 0;
}

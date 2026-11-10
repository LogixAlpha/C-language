#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    //double h = cos(x) + sin(x) - sqrt(x);
    printf("Value of x : ");
    scanf("%d",&x);
    for(int i=0;i<=x;i++){
        printf("x = %d \th(x) = %.2f \n",i,cos(i)+sin(i)-sqrt(i));
    }

    return 0;
}

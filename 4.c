#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    //double h = cos(x) + sin(x) - sqrt(x);
    for(x= 1;x<=100;x++){
        printf("x = %d \t h(x) = %f",x,cos(x)+sin(x)-sqrt(x));
    }

    return 0;
}

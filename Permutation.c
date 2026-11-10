#include <stdio.h>

void permutation(int *pa,int *pb){
    // Junk code :)
    /* printf("a= %d \nb= %d \n",*pa,*pb);
    int _ = *pa;
    pa = *pb ;
    pb = _ ;*/
    
    printf("Avant permutation: \na=%d \tb=%d\nApres permutation:\na=%d \tb=%d",*pa,*pb,*pb,*pa);
}
int main(void)
{
    int a,b;
    printf("La valeur de a et b : ");
    scanf("%d %d",&a,&b);
    permutation(&a,&b);
    return 0;
}

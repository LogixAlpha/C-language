#include <stdio.h>

int main()
{
    int items = 15;
    float cost = 10;
    float total = items * cost ;
    char currency[] = "DH";
    // print Items / cost / total
    printf("Items: %i \n",items);
    printf("Cost of one item: %.2f %s \n",cost,currency);
    printf("Total Cost: %.2f %s",total,currency);
    
    return 0;
}

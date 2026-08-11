/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int items = 15;
    float cost = 10;
    float total = items * cost ;
    char currency[] = "DH";
    
    printf("Items: %i \n",items);
    printf("Cost of one item: %.2f %s \n",cost,currency);
    printf("Total Cost: %.2f %s",total,currency);
    
    return 0;
}
#include<stdio.h>
void main()
{
    int no;
    printf("enter the value of number:");
    scanf("%d",&no);
    if (no > 0)
    {
        printf("\nnumber is positive.");
    }
    else if (no == 0)
    {
        printf("\nnumber is zero.");
    }
    else
    {
        printf("\nnumber is nagative.");
    }
    
}
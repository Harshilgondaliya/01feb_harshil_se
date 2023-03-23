#include<stdio.h>
int main()
{
    int no[4][4] ;//={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}
    int a,b;
    for ( a = 0; a < 4; a++)
    {
         for ( b = 0; b < 4; b++)
         {
            printf("Enter value %d%d:",a,b);
            scanf("%d",&no[a][b]);
         }
         
    }
    for ( a = 0; a < 4; a++)
    {
        for ( b = 0; b < 4; b++)
        {
            printf(" %d",no[a][b]);
        }
        printf("\n");
    }
    
    
}
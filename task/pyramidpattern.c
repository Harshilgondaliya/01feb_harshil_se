// wap to create pyramid using loop
#include<stdio.h>
int main()
{
    int i,j;
    int count = 10;
    for ( i = 0; i < 10;i++)
    {
        //for ( int k = 0; k < count; k++)
        //{
        //  printf("  ");    
        //}
        
        //count--;
        for ( j = 0; j <=i;j++)
        {
            printf(" ");
        }
        count--;
        for ( int k = 0; k < count; k++)
        {
            printf("%d ",j);    
        }
        printf("\n");
    }
    
}

// WAP to
/*
A
B C
D E F
G H I J
K L M N O
*/

#include<stdio.h>
int main()
{
    int i,j,rows,count = 65;
    printf("Enter rows : ");
    scanf("%d",&rows);

    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%c ",count);
            count ++;

        }
        printf("\n");
    }
    
}

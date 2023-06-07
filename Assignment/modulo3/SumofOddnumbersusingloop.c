// WAP Find Sum Odd numbers are there using loop
#include<stdio.h>
int main()
{
    int number;
    int sum = 0;
 
    printf("Enter odd number 1 to : ");
    scanf("%d",&number);

    printf("odd numbers from 1 to %d is : ",number);

    for (int i = 1; i < number ; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d, ",i);
            sum = sum + i;
        }
    }
    
    printf("\nSum of All odd Numbers from 1 to %d is : %d ",number,sum);
    
    
}
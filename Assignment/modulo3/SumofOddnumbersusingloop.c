// WAP Find Sum Odd numbers are there using loop
#include<stdio.h>
int main()
{
    int number;
    int sum = 0;

    // enter number from find odd number 
    printf("Enter odd number 1 to : ");
    scanf("%d",&number);

    // show even number
    printf("odd numbers from 1 to %d is : ",number);

    for (int i = 1; i < number ; i++)
    {

        // check odd number
        if (i % 2 != 0)
        {
            printf("%d, ",i);
            sum = sum + i;
        }
        
    }

    // print sum of even number
    printf("\nSum of All odd Numbers from 1 to %d is : %d ",number,sum);
    
    
}
// WAP To Find out How many Odd numbers are there using loop
#include<stdio.h>
int main()
{
    int number;

    // Enter Number 
    printf("Find Odd number from 1 to : ");
    scanf("%d",&number);

    // print Odd numbers
    printf("\nOdd number From 1 to %d is : ",number);

    for (int  i = 1; i < number ; i++)
    {

        // check odd number
        if (i % 2 != 0)
        {
            printf("%d, ",i);
        }
        
    }
    
}

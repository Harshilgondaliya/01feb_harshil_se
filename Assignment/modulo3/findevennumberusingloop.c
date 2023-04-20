// find out how many even numbers are there using loop
#include<stdio.h>
int main()
{
    int number;

    // Enter Number
    printf("Enter even number from 1 to : ");
    scanf("%d",&number);

    // print even numbers
    printf("\nEven Numbers From 1 to %d is : ",number);

    // start loop from 1 and increment it by 1
    for (int i = 1; i < number ; i++)
    {

        // check even number
        if (i % 2 == 0)
        {
            printf("%d, ",i);
        }
        
    }

    
    
}
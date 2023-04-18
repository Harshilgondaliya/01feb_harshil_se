// WAP find of even number using loop 
#include<stdio.h>
int main()
{
    int number;
    int sum = 0;

    // enter number from find even number 
    printf("Enter even number 1 to : ");
    scanf("%d",&number);

    // show even number
    printf("Even numbers from 1 to %d is : ",number);

    for (int i = 1; i < number ; i++)
    {

        // check even number
        if (i % 2 == 0)
        {
            printf("%d, ",i);
            sum = sum + i;
        }
        
    }

    // print sum of even number
    printf("\nSum of All Even Numbers from 1 to %d is : %d ",number,sum);
    
    
}
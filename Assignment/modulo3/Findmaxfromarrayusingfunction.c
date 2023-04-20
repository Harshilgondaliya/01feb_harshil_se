// WAP to find out the max number from given array using function
#include <stdio.h>
#include <math.h>

int main() 
{
    int no[10];
    
    // get value for loop
    for(int i = 0; i<= 10; i++)
    {
        printf("Enter number in index - %d : ",i);
        scanf("%d",&no[i]);
    }

    // find max from given for loop
    int max = no[0];
    for(int i = 0; i <= 10; i++)

    {

    // fmax function for find max
    max = fmax(max,no[i]);
    
    }
    
    // print max number  
    printf("\nMax number from array is %d",max);
    return 0;
}
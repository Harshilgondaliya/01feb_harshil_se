// WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
    int no;
    long int fact = 1;
    // pass the massage to enter number
    printf("Enter the number : ");
    // get the value
    scanf("%d",&no);
    // multiplication of the given number
    for (int i = 1; i < no; i++)
    {
        fact *= i;

    }
    // pass factorial of given number
    printf("Factorial of %d is : %ld",no,fact);
    return 0;
}
// WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
    int no ,a1 = 0 ,a2 = 1 ,a3 ;
    // pass the message to enter the number
    printf("Enter The Number To Creat Fibonacci Series : ");
    // get the given value
    scanf("%d",&no);
    // create loop gor fibonacci series
    for (int i = 0; i < no; i++)
    {
        printf("%d ",a1);
        a3 = a1 + a2;
        a1 = a2;
        a2 = a3;

    }
      
}
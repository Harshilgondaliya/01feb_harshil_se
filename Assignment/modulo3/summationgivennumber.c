// WAP To Find Summation Of Given Number
#include<stdio.h>
int main()
{
    int a,b,no;
    // pass the massage to enter value
    printf("Enter the number : ");
    // get the value
    scanf("%d",&no);
    b = 0;
    for (int i = 1; no%10 > 0; i++)
    {
        a = no % 10;
        b = b+a;
        no = no/10;
    }
    printf("Summation of given number : %d",b);
    
}
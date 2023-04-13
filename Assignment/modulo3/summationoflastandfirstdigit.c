// WAP To Do Summation Of First And Last Digit Given By User
#include<stdio.h>
int main()
{
    int f,l,no,ans;
    // pass the massage to enter value
    printf("Enter the value :");
    // get the value
    scanf("%d",&no);
    // find the last digit for given number
    l = no % 10;
    // find the first digit by dividing n by 10 until and greater then 10
    while (no >= 10)
    {
        no = no/10;
    }
    f = no;
    // sum of first and last digit
    ans = f + l;
    // pass the sum of first and last digit
    printf("Sum of First & Last digit is : %d",ans);

    

}
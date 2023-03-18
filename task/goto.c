#include<stdio.h>
int main()
{
    int a;
    int flag = 0;
    int no;
    printf("Enter number to check given number prime or not prime :");
    scanf("%d",&no);
    for ( a = 2; a < no; a++)
    {
        if (no % a == 0)
        {
            flag = 1;
            goto prime;
        }
        
    }
    prime:
        if (flag == 0)
        {
            printf("\n%d Prime Number:", no);
        }
        else
        {
            printf("\n%d Not Prime Number:", no);
        }
        return 0;
    
}
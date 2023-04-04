// WAP To find factorial  using recursive function
#include<stdio.h>
// Recursive function
long int facto(long int no)
{
    if (no < 1)
    {
        return 1;
    }
    // facto() method call it self
    return  no * facto(no-1);
    /*
        for ex. 5 * facto(5 - 1);
    */
}
int main()
{
    long int n;
    printf("Enter the value of no:");
    scanf("%ld", &n);
    printf("%ld",facto(n));
    return 0;
}

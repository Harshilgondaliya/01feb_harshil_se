#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);

    a++;
    printf("value of a after using increment operator is : %d",a);
    b--;
    printf("\nvalue of b after using decrement operator is : %d",b);
    return 0;
}
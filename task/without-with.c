#include<stdio.h>
void data(int no)
{
    printf("\nvalue of no is : %d",no);
}
void main()
{
    int a;
    printf("\nEnter the value of a :");
    scanf("%d",&a);
    data(a);
}
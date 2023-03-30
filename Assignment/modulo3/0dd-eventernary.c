#include<stdio.h>
int main()
{
    int a;
    printf("Enter the even value:");
    scanf("%d",&a);
    (a % 2 == 0) ? (printf("(Number Is Even)")) : (printf("(Number Is Odd)"));
}
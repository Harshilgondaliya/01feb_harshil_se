//Find max no 3 using turnery
#include<stdio.h>
void main()
{
    int a,b,c;
    int ch;
    printf("\na:");
    scanf("%d",&a);
    printf("\nb:");
    scanf("%d",&b);
    printf("\nc:");
    scanf("%d",&c);
    (a > b) ? ((a > c) ? (printf("\n A is max :%d")) : printf("\nC is max :%d")) : ( (b > c) ? printf("\nB is max :%d") : printf("\nC is max :%d"));
    //printf(" no : %d",ch);   
}
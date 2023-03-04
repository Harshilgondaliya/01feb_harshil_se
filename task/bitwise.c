//&,|,!,>>,<<,~
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    printf("\nbitwise & is:%d",x&y);
    printf("\nbitwise | is:%d",x|y);
    printf("\nbitwise ! is:%d",!(x|y));
    printf("\nbitwise >> is:%d",x>>y);
    printf("\nbitwise << is:%d",x<<y);
    printf("\nbitwise ~ is:%d",~x);
    printf("\nbitwise ~ is:%d",~y);
}
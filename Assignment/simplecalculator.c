// Write a program to mack simple calculator//
#include<stdio.h>
void main()
{
    int a,b;
    float div;
    int ans;
    printf("enter the value:");
    scanf("%d%d",&a,&b);
    ans=a+b;
    printf("2 numbers addition:%d",ans);
    ans=a-b;
    printf("\nsubstration of 2 numbers: %d",ans);
    ans=a*b;
    printf("\nmultiplication of 2 numbers: %d",ans);
    div=(float)a/(float)b;
    printf("\ndivision of 2 numbers: %f",div);
    ans=a%b;
    printf("\nmodulo of 2 numbers: %d",ans);
   

}
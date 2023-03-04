#include<stdio.h>
void main()
{
    int a;
    int ans;
    printf("Enter your current age:");
    scanf("%d",&a);
    printf("\n your current age in 2023 is:%d",a);
    ans=a++;
    ans=a++;
    ans=a++;
    printf("\n your age in 2026:%d",a);
    ans=a--;
    ans=a--;
    printf("\n your age in 2024:%d",a);
    ans=a--;
    ans=a--;
    printf("\n your age in 2022:%d",a);
    

}
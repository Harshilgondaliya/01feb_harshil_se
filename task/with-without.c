#include<stdio.h>
int no;
int getdata()
{
    printf("\nenter the value of number :");
    scanf("%d",&no);
}
int showdata()
{
    printf("\n value of number is : ");
    return no;
}
int main()
{
    getdata();
    printf("%d",showdata());
}
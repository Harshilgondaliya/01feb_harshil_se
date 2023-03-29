#include<stdio.h>
void data(char id[30])
{
    printf("Your E-mail Id is : (%s)",id);
}
void main()
{
    char a[20];
    printf("Enter Your E-mail Id :");
    scanf("%s",&a);
    data(a);
}
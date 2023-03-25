#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("Enter Your \n First Name : ");
    scanf("%s",&a);
    printf("\nLast Name : ");
    scanf("\n%s",&b);
    strcat(a , b);
    printf("\n Your Full Name Is -> %s", a);
}
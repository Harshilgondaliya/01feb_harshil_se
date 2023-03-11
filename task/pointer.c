#include<stdio.h>
void main()
{
    int a=111;
    int *ptr;
    ptr=&a;
    printf("\nAddress of a is:%d",ptr);

    *ptr=200;
    ++*ptr;
    printf("\nValue of a is:%d",a);
}
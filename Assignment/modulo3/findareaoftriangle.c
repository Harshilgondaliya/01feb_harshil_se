// WAP to find Area of Triangle //
#include<stdio.h>
void main ()
{
    float b;
    float h;
    float area;
    printf("Enter Base of Triangle:");
    scanf("%f",&b);
    printf("\nEnter Hight of Triangle:");
    scanf("%f",&h);
    area=b*h /2;
    printf("\nArea of Triangle:%f",area);
}
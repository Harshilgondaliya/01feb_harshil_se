//WAP to Find Area of Rectangle //
#include<stdio.h>
void main()
{
    float height;
    float width;
    float area;
    printf("Height of rectangle:");
    scanf("%f",&height);
    printf("\nWidth of rectangle:");
    scanf("%f",&width);
    area=height*width;
    printf("\nTotal area of rectangle:%f",area);
}
// take any type of input from user and find the type of input
#include<stdio.h>
void main()
{
    char value;
    printf("Enter value to find input type :");
    scanf("%c",&value);
    
    if (value >= 48 && value <= 57)
    {
        printf("\n%c number",value);
    }
    
    else if (value >= 65 && value <= 122)
    {
        printf("\n%c character",value);
    }
    
    else
    {
        printf("\n%c special character",value);
    }
    
}

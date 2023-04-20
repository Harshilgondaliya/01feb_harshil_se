// WAP to find reverse of string using recursion

#include<stdio.h>

void reversestring();
int main()
{
    printf("Enter word that you want to Reverse : ");
    reversestring();
    return 0;
}

void reversestring()
{
    char string;

    scanf("%c",&string);
    if (string != '\n')
    {
        reversestring();
        printf("%c",string);
    }
    
}
#include<stdio.h>
#include<string.h>
void main()
{
    char string[20];
    int length;
    printf("\nEnter Your String : ");
    scanf("%s",&string);
    length = strlen(string);
    printf("\n Your String Length :%d",length);
}
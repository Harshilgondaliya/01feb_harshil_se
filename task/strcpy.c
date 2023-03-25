#include<stdio.h>
#include<string.h>
int main()
{
    char string1[20],string2[20];
    printf("\n Enter your name : ");
    scanf("%s",&string1);
    strcpy(string2 , string1);
    printf("\n Your name is :%s",string2);
}
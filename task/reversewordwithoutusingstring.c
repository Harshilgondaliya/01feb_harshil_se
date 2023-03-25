#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    printf("Enter Your Name : ");
    scanf("%s",&name);
    int length;
    length = strlen(name);
    int i;
    for ( i = length; i >=0; i--)
    {
        printf("%c",name[i]);
    }
    int a = 0;
    for ( i =length; i >= 1; i--)
    {
        a++;
    }
    printf("\n%d",a);
    
    
}
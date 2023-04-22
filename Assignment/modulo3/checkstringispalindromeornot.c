// WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    char in[20];
    char rev[20];
    // pass massage to user 
    printf("enter the word to check palindrome or not : ");
    scanf("%s",&in);

    // string copy
    strcpy(rev,in);

    // string reverse
    strrev(rev);

    if (strcmp(in,rev) == 0)
    {
        printf("%s is palindrome.",in);
    }
    else
    {
        printf("%s is not palindrome.",in);
    }
    
}
// WAP to reverse a string and check that the string is palindrome or not
#include <stdio.h>
#include <string.h>
int main()
{
    char input[30], reverse[30];
    // massage pass to user
    printf("Enter word check Palindrome or not :");
    // to store value
    scanf("%s", &input);
    
    // string copy
    strcpy(reverse, input);

    // string revers
    strrev(reverse);

    if (strcmp(input, reverse) == 0)
    {
        printf("%s is palindrome",input);
    }
    else
    {
        printf("%s is not palindrome",input);
    }
}
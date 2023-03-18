#include<stdio.h>
void main()
{
    char ch;
    printf("Enter Character :");
    scanf("%c",&ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("vowel :");
    }
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'o' || ch == 'U')
    {
        printf("vowel :");
    }
    else if ( ch >=65 && ch <= 122 && !(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'|| ch == 'u'|| ch == 'U')  )
    {
        printf("consonants :");
    }
    else
    {
        printf("Given Character is Number, Special character, or Symbol");
    }
    
}
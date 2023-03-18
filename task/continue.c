#include<stdio.h>
int main()
{
    int a;
    for ( a = 0; a <20; a++)
    {
        if (a == 10 || a == 5 || a == 15)
        {
            continue;
        }
        printf("\t%d",a);
        
    }
    
}
// WAP to
/*
A 
A B 
A B C 
A B C D 
A B C D E
*/

#include <stdio.h>  
void main()  
{  
      
    int i, j, rows;  
    printf (" Enter rows : ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; ++i)   
    {  
        for (j = 1; j <= i; ++j)  
        {  
            printf ("%c ", 'A' + j - 1); 
        }  
        printf ("\n");   
    }        
}  

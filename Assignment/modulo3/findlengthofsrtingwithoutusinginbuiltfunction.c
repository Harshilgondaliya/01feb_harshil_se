// WAP Find out length of string without using inbuilt function

#include<stdio.h>
void main()
{
    char w[20];
    int i;
    
    // Pass Message enter string
    printf("Enter Words : ");
    scanf("%s",&w);
    
    // count the string for loop
    for ( i = 0; w[i] != 0; i++); 

    // print The number of string
    printf("Length of %s is : %d words",w,i);
}
// WAP to Print Table
#include<stdio.h>
int main()
{
    int a;
    int b;
    // enter table number 
    printf("enter table : ");
    scanf("%d",&a);
    // print table
    printf("\n      ( table of %d is )\n\n",a);

    for ( b = 1; b <= 10; ++b)
    {
        // print table 
        printf("\t%d   * \t%d\t=  %d \n",a ,b ,a * b);

    }
    
}
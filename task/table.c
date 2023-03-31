#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("enter table : ");
    scanf("%d",&a);
    printf("     ( table of %d is )\n",a);

    for ( b = 1; b <= 10; ++b)
    {
        printf("\t%d * %d = %d \n",a ,b ,a * b);

    }
    
}
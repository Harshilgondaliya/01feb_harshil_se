// Program of Union
#include <stdio.h>
union info
{
    int pass;
    char nm[20];
} object;
int main()
{
    printf("Enter your password : ");
    scanf("%d",&object.pass);
    printf("Enter your name : ");
    scanf("%s",&object.nm);
    
    printf("%s Your Password is : %d ",object.nm,object.pass);
}
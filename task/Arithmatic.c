#include<stdio.h>
void main()
{
    int a,b;
    float div;
    int ans;
    char n='x',m='y';
    printf("enter the value:");
    scanf("%d%d",&a,&b);
    ans=a+b;
    //printf("2 numbers addition:%d",ans);
    printf("addition of 2 numbers: %d",n+m);
    ans=a-b;
    printf("\nsubstration of 2 numbers: %d",ans);
    ans=a*b;
    printf("\nmultiplication of 2 numbers: %d",ans);
    //ans=a/b;
    div=(float)a/(float)b;
    printf("\ndivision of 2 numbers: %f",div);
    ans=a%b;
    printf("\nmodulo of 2 numbers: %d",ans);
    ans=a++;
    printf("\nincrement of 2 numbers: %d",a);
    ans=b--;
    printf("\ndecrement of 2 numbers: %d",b);


}
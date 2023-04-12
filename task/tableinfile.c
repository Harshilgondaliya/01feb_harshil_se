#include<stdio.h>
int main()
{
    FILE *fptr;
    int ans,i,table;
    int tab;
    char str[20];
    printf("Enter Table:");
    scanf("%d",&table);

    fptr = fopen("D:/new/hello.txt","w");
    for ( i = 1; i <= 10; i++)
    {
        ans = table * i;
        fprintf(fptr,"\n%d*%d=%d\n",table,i,ans);
    }    
    fclose(fptr);
    fptr = fopen("D:/new/hello.txt","r");
    for ( i = 1; i <= 10; i++)
    {
        // printf("\n%d*%d=%d",table,i,ans);    
        fscanf(fptr,"%s",&str);
        printf("\n%s\n",str);
    }
    fclose(fptr);
    return 0;
}
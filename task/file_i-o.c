#include<stdio.h>
int main()
{
    FILE *fptr;
    char fdata[20];
    char nm[20];
    printf("Enter your string:");
    scanf("%s",&nm);
    fptr = fopen("D:/new/hello.txt","a");
    fprintf(fptr, "%s" ,nm);
    fclose(fptr);
    fptr = fopen("D:/new/hello.txt","r");
    fscanf(fptr, "%s" ,&fdata);
    printf("%s",fdata);
    fclose(fptr);
    return 0;
}
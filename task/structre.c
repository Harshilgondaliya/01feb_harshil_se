#include<stdio.h>
struct stdata
{
    int id;
    char name[20];
}st;
int main()
{
    printf("Enter your id :");
    scanf("%d",&st.id);
    printf("Enter your name :");
    scanf("%s",&st.name);
    printf("%s Your id is : %d",st.name,st.id);
}
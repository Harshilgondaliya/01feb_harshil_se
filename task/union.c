#include<stdio.h>
union stdata
{
    int id;
    char name[20];
}st;
int main()
{
    printf("Enter Your ID :");
    scanf("%d",&st.id);
    printf("Enter Your NAME :");
    scanf("%s",&st.name);
    printf("%s Your ID is :%d",st.name,st.id);
}

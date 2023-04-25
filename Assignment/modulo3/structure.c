// Program of Structure

#include<stdio.h>
struct data
{
   int id;
   char nm[20];
} st;

int main()
{
printf("Enter your name : ");
scanf("%s",&st.nm);
printf("Enter your id  : ");
scanf("%d",&st.id);
printf("%s Your id is %d",st.nm,st.id);
}

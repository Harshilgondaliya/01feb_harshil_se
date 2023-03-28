#include<stdio.h>
int no;
void getdata()
{
    printf("\nEnter the value of number :");
    scanf("%d",&no);
}
void showdata()
{
    printf("\nvalue of number is : %d", no);
}
void main()
{
    getdata();
    showdata();

}
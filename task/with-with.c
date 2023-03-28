#include<stdio.h>
int add(int a,int b)
{
    return a - b;
}
int main()
{
    int A , B;
    printf("\nEnter the value of A and B :");
    scanf("%d%d",&A,&B);
    printf("\n(%d)",add(A,B));

}
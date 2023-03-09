// write a program to find simple interest //
#include<stdio.h>
void main()
{
    float interest;
    float duration,amount,irate;
    float ans;
        printf("\nEnter Years:");
        scanf("%f",&duration);
        printf("Enter Amount:");
        scanf("%f",&amount);
        printf("\nEnter the Interest Rate:");
        scanf("%f",&irate);
        interest = (amount*duration*irate)/(100);
        printf("\nYour Interest Amount is:%f",interest);
        ans=amount+interest;
        printf("\n\nYour Total Amount With Interest is :%f",ans);
}

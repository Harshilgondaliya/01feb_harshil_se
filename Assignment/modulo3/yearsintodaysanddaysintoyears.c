// WAP to convert years into days and days into years //
#include <stdio.h> 
int main()
{
    float days; 
    float years;
    // Converts days to years and days
    printf("Enter Days : ");
    scanf("%f",&days);
    years=(float)days/(float)365;
    printf("Days Equals to '%f' Years",years);

}
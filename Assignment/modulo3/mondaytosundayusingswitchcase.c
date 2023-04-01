// WAP to show Monday to Sunday switch case
#include<stdio.h>
int main()
{
    int days;
    printf("\n 1.MONDAY \n 2.TUESDAY \n 3.WEDNESDAY \n 4.THURSDAY \n 5.FRIDAY \n 6.SATURDAY \n 7.SUNDAY ");
    printf("\n Enter Day :");
    scanf("%d",&days);
    switch (days)
    {
    case 1:
        printf("\nMONDAY");
        break;

    case 2:
        printf("\nTUESDAY");
        break;

    case 3:
        printf("\nWEDNESDAY");
        break;

    case 4:
        printf("\nTHURSDAY");
        break;

    case 5:
        printf("\nFRIDAY");
        break;

    case 6:
        printf("\nSATURDAY");
        break;

    case 7:
        printf("\nSUNDAY");
        break;
    
    default:
        printf("\nThis day is not available");
        break;
    }
}
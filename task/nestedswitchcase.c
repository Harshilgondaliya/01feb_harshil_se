#include<stdio.h>
void main()
{
    int colddrinks,hotdrinks,thumsup,maza,tea,coffe;
    int choice;
    int choose;
    printf("\n1.colddrinks:\n2.hotdrinks:");
    printf("\n Enter your choice:");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("\ncolddrinks:");
        // break;
            printf("\n1.Thumsup:\n2.Maza:");
            printf("\n choose any one:");
            scanf("%d",&choose);
        switch (choose)
        {
        case 1:
            printf("\n THUMSUP");
            break;
        case 2:
            printf("\n MAZA");
            break;
        
        default:
            printf("\n not available");
            break;
        }
       break; 
    case 2:
        printf("\nhotdrinks:");        
        // break;
            printf("\n1.Tea:\n2.coffe:");
            printf("\n choose any one:");
            scanf("%d",&choose);
        switch (choose)
        {
        case 1:
            printf("\n TEA");
            break;
        case 2:
            printf("\n COFFE");
            break;
        
        default:
            printf("\n not available");
            break;
        }
        break;
    default:
        printf("\nnot available");
        break;
    }
}
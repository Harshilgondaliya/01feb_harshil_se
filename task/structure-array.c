#include<stdio.h>
struct Stdata
{
    int id;
    char name[20];
};

int main()
{
    struct Stdata obj[20];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter Your ID :");
        scanf("%d", &obj[i].id);
        printf("Enter Your Name:");
        scanf("%s", &obj[i].name);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n%s Your ID is:%d", obj[i].name, obj[i].id);
    }
    
    return 0;
}
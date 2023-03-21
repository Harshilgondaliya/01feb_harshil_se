#include <stdio.h>
int main()
{
    /*
    int array[2] = {1,2,3};
    printf("value of second index is -> %d",array[2]);
    */

    int array[3][3];
    int a, b;
    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 3; b++)
        {
            printf("\nEnter value of array[%d][%d] ->", a, b);
            scanf("%d", &array[a][b]);
        }
    }
    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 3; b++)
        {
            printf("\n Array [%d][%d]->%d", a, b, array[a][b]);
        }
    }
}
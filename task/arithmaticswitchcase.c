#include <stdio.h>
int main()
{
    int a, b, count, ans;
    printf("\n1.+\n2.-\n3./\n4.*");
    printf("\nEnter First Value :");
    scanf("%d", &a);
    printf("\nchoose any one :");
    scanf("%d", &count);
    printf("\nEnter Second Value :");
    scanf("%d", &b);

    switch (count)
    {
    case 1:
        printf("\n %d + %d = %d", a, b, a + b);
        break;

    case 2:
        printf("\n %d - %d = %d", a, b, a - b);
        break;

    case 3:
        printf("\n %d / %d = %d", a, b, a / b);
        break;

    case 4:
        printf("\n %d * %d = %d", a, b, a * b);
        break;

    default:
        printf("\n Not Available");
        break;
    }
}
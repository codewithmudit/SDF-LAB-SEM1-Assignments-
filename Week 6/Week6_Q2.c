#include <Stdio.h>
int main()
{
    int a, b, d0 = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0;
    printf("Enter the number : ");
    scanf("%d", &a);
    do
    {
        b = a % 10;
        a = a / 10;
        switch (b)
        {
        case 0:
            d0 = d0 + 1;
            break;
        case 1:
            d1 = d1 + 1;
            break;
        case 2:
            d2 = d2 + 1;
            break;
        case 3:
            d3 = d3 + 1;
            break;
        case 4:
            d4 = d4 + 1;
            break;
        case 5:
            d5 = d5 + 1;
            break;
        case 6:
            d6 = d6 + 1;
            break;
        case 7:
            d7 = d7 + 1;
            break;
        case 8:
            d8 = d8 + 1;
            break;
        case 9:
            d9 = d9 + 1;
            break;
        }
    } while (a > 0);
    printf("frequency of 0 = %d \n", d0);
    printf("frequency of 1 = %d \n", d1);
    printf("frequency of 2 = %d \n", d2);
    printf("frequency of 3 = %d \n", d3);
    printf("frequency of 4 = %d \n", d4);
    printf("frequency of 5 = %d \n", d5);
    printf("frequency of 6 = %d \n", d6);
    printf("frequency of 7 = %d \n", d7);
    printf("frequency of 8 = %d \n", d8);
    printf("frequency of 9 = %d \n", d9);
    return 0;
}

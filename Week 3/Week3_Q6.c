#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("The pair is in descending order \n");
    }
    else if (b > a)
    {
        printf("The pair is in ascending order \n");
    }
    else
    {
        printf("The numbers are equal \n");
    }
    return 0;
}

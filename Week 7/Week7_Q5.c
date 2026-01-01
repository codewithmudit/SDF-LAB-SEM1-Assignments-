#include <stdio.h>
int main()
{
    int order, sum = 0;
    printf("Enter order of the matrix : ");
    scanf("%d", &order);
    int arr[order][order];
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            printf("Enter the row %d and column %d element :", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
            if (j >= i)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("The sum of upper triangle matrix is : %d", sum);
}
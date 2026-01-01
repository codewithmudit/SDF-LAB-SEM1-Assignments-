#include <stdio.h>
int main()
{
    int order;
    printf("Enter order of the matrix : ");
    scanf("%d", &order);
    int arr[order][order][order];
    printf("Enter the elements \n");
    for (int k = 0; k < order; k++)
    {
        printf("for Layer %d : \n", k);
        for (int i = 0; i < order; i++)
        {
            for (int j = 0; j < order; j++)
            {
                printf("Enter the row %d and column %d element :", i + 1, j + 1);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    printf("Your 3d matrix is \n");
    for (int k = 0; k < order; k++)
    {
        printf("for Layer %d : \n", k);
        for (int i = 0; i < order; i++)
        {
            for (int j = 0; j < order; j++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
    }
}
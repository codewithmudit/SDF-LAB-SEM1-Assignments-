#include <stdio.h>
int main()
{
    int row;
    printf("Enter the number of rows : ");
    scanf("%d", &row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 1; j < (2 * row); j++)
        {
            if (j == row - i || j == row + i || i == row - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

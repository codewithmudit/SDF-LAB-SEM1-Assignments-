#include <stdio.h>
int main()
{
    int rows, i = 1, j = 1, left_end, right_end;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    do
    {
        left_end = rows - i + 1;
        right_end = rows + i - 1;
        do
        {
            if (j == left_end || j == right_end || i == rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            j = j + 1;
        } while (j <= ((2 * rows) - 1));
        printf("\n");
        j = 1;
        i = i + 1;
    } while (i <= rows);
    return 0;
}

#include<stdio.h>
int main()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for(int i = 0 ; i<row ; i ++)
    {
        for(int j = 0 ; j<(2*row+1) ; j++)
        {
            if(j<(row-i) || j>(row+i))
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
    for(int i = 0 ; i<row ; i ++)
    {
        for(int j = 0 ; j<(2*row+1) ; j++)
        {
            if(j<(i+1) || j>(2*row-i-1))
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
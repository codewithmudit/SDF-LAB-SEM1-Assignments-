#include <stdio.h>
int main()
{
    int i = 0, j = 0, k = 0, n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    int mat1[n][n];
    int mat2[n][n];
    int mat3[n][n];
    printf("Enter matrice 1 \n");
    do
    {
        do
        {
            printf("Enter the row %d element of column %d : ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
            i = i + 1;
        } while (i < n);
        i = 0;
        j = j + 1;
    } while (j < n);
    i = 0;
    j = 0;
    printf("Input matrice 2 \n");
    do
    {
        do
        {
            printf("Enter the row %d element of column %d : ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
            i = i + 1;
        } while (i < n);
        i = 0;
        j = j + 1;
    } while (j < n);
    i = 0 ; 
    j = 0 ;
    do
    {
        do
        {
            do
            {
                mat3[i][j] = mat1[i][j] * mat2[k][j];
                k = k + 1;
            } while (k < n);
            k = 0;
            i = i + 1;
        } while (i < n);
        j = j + 1;
        i = 0;
    } while (j < n);
    i = 0;
    j = 0;
    printf("matrice obtained by multiplying mat1 and mat2 is : \n");
    do
    {
        do
        {
            printf("%d ", mat3[i][j]);
            i = i + 1;
        } while (i < n);
        printf("\n");
        i = 0;
        j = j + 1;
    } while (j < n);
    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the array size : ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Need at least 2 elements\n");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element no. %d of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Your array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int small = arr[0], ssmall = 1000;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            ssmall = small;
            small = arr[i];
        }
        else if (arr[i] > small && arr[i] < ssmall)
        {
            ssmall = arr[i];
        }
    }
    printf("\n");
    printf("The second smallest element is : %d", ssmall);
    return 0;
}

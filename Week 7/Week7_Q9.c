#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
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
    printf("\n");
    int reversed[n];
    printf("Reeversed array is : ");
    for (int i = 0; i < n; i++)
    {
        reversed[i] = arr[n - i - 1];
        printf("%d ", reversed[i]);
    }
    return 0;
}

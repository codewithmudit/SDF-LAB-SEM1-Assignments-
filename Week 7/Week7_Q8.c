#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter the number of numbers : ");
    scanf("%d", &n);
    int arr[n];
    int visited[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of the array : ", i + 1);
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = 1;
                count = count + 1;
            }
        }
        printf("Frequency of %d is : %d \n", arr[i], count);
    }
    return 0;
}
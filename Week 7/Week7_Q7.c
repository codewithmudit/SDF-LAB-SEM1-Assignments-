#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of numbers : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int average = sum / n;
    printf("Sum of all numbers is : %d \n", sum);
    printf("Average of all numbers is : %d \n", average);
}
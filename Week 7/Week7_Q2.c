#include <stdio.h>
int main()
{
    int i = 0;
    char arr[100];
    printf("Enter an array : ");
    gets(arr);
    printf("Your array is : ");
    puts(arr);
    do
    {
        if (arr[i] == '\0')
        {
            break ;
        }
        i = i + 1;
    } while (i < 100);
    printf("Length of the array is %d", i);
    return 0;
}

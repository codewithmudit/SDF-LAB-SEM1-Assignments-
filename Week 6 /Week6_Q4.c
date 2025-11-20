#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("The prime factors of %d are : ", num);
    int first = 1;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)    
        {
            if (!first)
            {
                printf(", ");
            }
            printf("%d", i);
            first = 0 ;
        }
        while (num % i == 0)
        {
            num = num / i;
        }
    }
    return 0;
}

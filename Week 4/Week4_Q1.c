#include<stdio.h>
int main()
{
    int a , b ; 
    printf("Enter the first value : ");
    scanf("%d", &a);
    printf("Enter the second value : ");
    scanf("%d", &b);
    if (a>b)
    {
        printf("%d is greater than %d", a, b);
    }
    else if(a<b)
    {
        printf("%d is greater than %d", b, a);
    }
    else
    {
        printf("%d is equal to %d", a, b);
    }
    return 0 ;    
}

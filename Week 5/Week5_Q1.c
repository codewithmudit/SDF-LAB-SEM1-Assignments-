#include<stdio.h>
int main()
{
    int num = 0 ;
    printf("Enter a number : ");
    scanf("%d", &num);
    switch((num>0) ? 1 : (num<0) ? -1 : 0)
    {
        case 1:
        printf("The number is positive");
        break;
        case 0:
        printf("The number is 0");
        break;
        case -1:
        printf("The number is negative");
        break;
    }
    return 0 ;
}

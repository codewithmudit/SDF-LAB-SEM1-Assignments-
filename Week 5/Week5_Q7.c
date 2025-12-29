#include<stdio.h>
int main()
{
    int num, n, d; 
    int sum = 0 ;
    printf("Enter a number : ");
    scanf("%d", &num);
    n = num;
    do
    {
        d = num%10;
        num = num/10;
        sum = sum + d ;
    } while (num!=0);
    printf("Sum of all the digits of %d is %d", n, sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int amount;
    printf("Enter the amount : ");
    scanf("%d", &amount);
    int n100 = 0 , n50 = 0 , n20 = 0 , n10 = 0 , n5 = 0 , n2 = 0 , n1 = 0 ;
    n100 = amount/100;
    amount = amount%100;
    n50 = amount/50;
    amount = amount%50;
    n20 = amount/20;
    amount = amount%20;
    n10 = amount/10; 
    amount = amount%10; 
    n5 = amount/5;
    amount = amount%5;
    n2 = amount/2;
    amount = amount%2;
    n1 = amount;
    printf("%d Note(s) of 100.00 \n", n100);
    printf("%d Note(s) of 50.00 \n", n50);
    printf("%d Note(s) of 20.00 \n", n20);
    printf("%d Note(s) of 10.00 \n", n10);
    printf("%d Note(s) of 5.00 \n", n5);
    printf("%d Note(s) of 2.00 \n", n2);
    printf("%d Note(s) of 1.00 \n", n1);
    return 0;
}

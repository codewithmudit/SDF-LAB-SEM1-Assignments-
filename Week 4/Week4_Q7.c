#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    int total;
    float percentage;
    printf("Enter your marks in Computer out of 100 : \n");
    scanf("%d", &a);
    printf("Enter your marks in Social Science out of 100 : \n");
    scanf("%d", &b);
    printf("Enter your marks in Maths out of 100 : \n");
    scanf("%d", &c);
    printf("Enter your marks in English out of 100 : \n");
    scanf("%d", &d);
    printf("Enter your marks in Hindi out of 100 : \n");
    scanf("%d", &e);
    if (a < 0 || a > 100 || b < 0 || b > 100 || c < 0 || c > 100 || d < 0 || d > 100 || e < 0 || e > 100)
    {
        printf("Invalid Marks! Please enter values between 0 and 100 only");
        return 0;
    }
    total = a + b + c + d + e;
    percentage = total / 5.0;
    printf("You scored %d/500 \n", total);
    printf("You scored %.2f%% marks \n", percentage);
    if (percentage >= 90)
    {
        printf("You have secured A grade");
    }
    else if (percentage >= 80)
    {
        printf("You have secured B grade");
    }
    else if (percentage >= 70)
    {
        printf("You have secured C grade");
    }
    else if (percentage >= 60)
    {
        printf("You have secured D grade");
    }
    else if (percentage >= 40)
    {
        printf("You have secured E grade");
    }
    else
    {
        printf("You have secured F grade");
    }
    return 0;
}

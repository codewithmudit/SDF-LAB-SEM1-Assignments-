#include<stdio.h> 
#include<math.h>
int main()
{
    float a, b, c;
    printf("Enter the coefficient of x^2, x and the constant term : ");
    scanf("%f %f %f", &a, &b, &c);
    float d = pow(b,2)-4*a*c ;
    switch ((d>0)-(d<0))
    {
        case 1:
        printf("The roots are %.2f and %.2f", (-b + sqrt((pow(b,2)-4*a*c)))/(2*a) , (-b - sqrt((pow(b,2)-4*a*c)))/(2*a) ) ;
        break ;
        case 0:
        printf("There are two equal roots : %.2f", (-b/(2*a)));
        break;
        case -1:
        printf("No real root exit");
        break;
    }
    return 0 ;
}

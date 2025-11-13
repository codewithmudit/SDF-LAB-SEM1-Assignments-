#include<stdio.h>

int main(){
    int a , b; 
    char operator;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter an operator (+, -, *, /) : ");
    scanf("%c", &operator);
    printf("Enter the second number : ");
    scanf("%d", &b);
switch(operator){
    case '+' :
    printf("Result = %d \n", a + b);
    break ;
    case '-' :
    printf("Result = %d \n", a - b);
    break ;
    case '*' :
    printf("Result = %d \n", a * b);
    break ;
    case '/' :
    printf("Result = %d \n", a / b);
    break ;
    default :
    printf("Invalid operator \n");
}
return 0 ;
}

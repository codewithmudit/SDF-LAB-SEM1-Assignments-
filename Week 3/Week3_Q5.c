#include<stdio.h>
int main(){
    int days, months, years ; 
    printf("Enter no of days : ");
    scanf("%d", &days);
    years = days/365; 
    days = days%365 ; 
    months = days/30 ; 
    days = days%30 ; 
    printf("%d Year(s) \n", years ) ; 
    printf("%d Months(s) \n", months ) ; 
    printf("%d Days(s) \n", days ) ; 
    return 0 ;
}

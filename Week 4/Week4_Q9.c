#include<stdio.h>
int main () {
    int basic;
    float HRA, DA ; 
    int salary ; 
        printf("Enter your base salary : ");
        scanf("%d", &basic);
        if(basic<10000){
            HRA = 0.2*basic ; 
            DA = 0.8*basic ; 
            salary = basic + HRA + DA ; 
            printf("Your salary is %d \n", salary);
        }
        else if(basic<=20000){
            HRA = 0.25*basic ; 
            DA = 0.9*basic ;
            salary = basic + HRA + DA ; 
            printf("Your salary is %d \n", salary);

        }
        else{
            HRA = 0.3*basic ; 
            DA = 0.95*basic ; 
            salary = basic + HRA + DA ; 
            printf("Your salary is %d \n", salary);
        }
    return 0 ; 
}

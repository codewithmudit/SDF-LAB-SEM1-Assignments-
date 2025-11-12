#include<stdio.h>
#include<stdlib.h>   
int main(){
    int a , b , c ; 
    printf("Enter your triangle's side 1 length : ");
    scanf("%d", &a);
    printf("Enter your triangle's side 2 length : ");
    scanf("%d", &b);
    printf("Enter your triangle's side 3 length : ");
    scanf("%d", &c);
    if (a+b>c && b+c>a && a+c>b && abs(a-b)<c && abs(b-c)<a && abs(c-a)<b){
        printf("Your triangle is VALID \n");
    }
    else{
        printf("Your triangle is NOT VALID \n");
    }
  return 0 ;     
}

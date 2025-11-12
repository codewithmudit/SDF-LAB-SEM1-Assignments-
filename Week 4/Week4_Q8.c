#include<stdio.h>
int main() 
{
int amount ;
int note500, note100, note50, note20, note10, note5, note2, note1 ;
printf("Enter the amount : ");
scanf("%d", &amount);
note500 = amount/500;
amount = amount%500;
note100 = amount/100;
amount = amount%100;
note50 = amount/50;
amount = amount%50; 
note20 = amount/20; 
amount = amount%20;
note10 = amount/10;
amount = amount%10; 
note5 = amount/5;
amount = amount%5;
note2 = amount/2;
amount = amount%2;
note1 = amount/1;
printf("total number of notes: 500 : %d , 100 : %d , 50 : %d , 20 : %d , 10 : %d , 5 : %d , 2 : %d , 1 : %d", note500 , note100, note50, note20, note10, note5, note2, note1) ;
return 0 ; 
}

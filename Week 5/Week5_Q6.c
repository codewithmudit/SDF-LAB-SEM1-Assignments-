#include <stdio.h>
int main(){
    int num ;
    printf("Enter a number : ");
    scanf("%d", &num);
    int i = 1 ;
    do 
    {
        printf("%d * %d = %d \n", num, i, num*i);
        i = i + 1 ;
    }while(i<11);
    return 0 ;
} 

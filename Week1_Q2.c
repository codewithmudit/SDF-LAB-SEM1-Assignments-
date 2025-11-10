#include<stdio.h>
int main()
{
    int height , width ;
    printf("Enter the height of the rectangle : ");
    scanf("%d", &height);
    printf("Enter the width of the rectangle : ");
    scanf("%d", &width);
    printf("Perimeter of the rectangle is : %d \n", 2*(height + width));
    printf("Area of the rectangle is : %d \n", height*width);
    return 0 ;    
}

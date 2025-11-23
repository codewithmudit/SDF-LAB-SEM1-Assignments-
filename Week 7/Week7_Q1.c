#include<stdio.h>
int main ()
{
    int n , i=0 , j=0, k=0;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int c ; 
    while((c=getchar())!='\n' && c != EOF ) {}
    char arr[n+1];
    char arr2[n+1];
    printf("Enter the elements : ");
    fgets(arr, n+1, stdin);
    printf("Your array is : ");
    puts(arr);
    do 
    {
        if((arr[i]>='a' && arr[i]<='z') || (arr[i]>='A' && arr[i]>='Z'))
        {
            arr2[j]=arr[i];
            j = j + 1 ;
        }
        i = i + 1 ;
    }while(i<n);
    printf("New array is : ");
    do 
    {
        printf("%c",arr2[k]);
        k = k + 1 ;
    }while(k<j);  
    return 0 ;
}

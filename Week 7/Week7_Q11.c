#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter your string : ");
    fgets(str, 50, stdin);
    printf("Your string is %s", str);
    int len = strlen(str);
    int visited[len - 1];
    for (int i = 0; i < len - 1; i++)
    {
        visited[i] = 0;
    }
    for (int i = 0; i < len - 1; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < len - 1; j++)
        {
            if (str[i] == str[j])
            {
                count = count + 1;
                visited[j] = 1;
            }
        }
        printf("The frequency of %c is : %d \n", str[i], count);
    }
    return 0;
}
// when we use fgets and press enter key after taking input then it stores '\n' (new line character also) , can solve this by doing len-2 instead of len-1 but safer approach is to remove the '\n' from the string
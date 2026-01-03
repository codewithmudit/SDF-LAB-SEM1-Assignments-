#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter your string : ");
    fgets(str, 50, stdin);
    printf("Your string is %s", str);
    int len = strlen(str);
    int vowel = 0;
    int consonant = 0;
    for (int i = 0; i < len - 1; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel = vowel + 1;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            consonant = consonant + 1;
        }
    }
    printf("Total No of Vowels is : %d \n", vowel);
    printf("Total No of consonants is : %d \n", consonant);
    return 0;
}
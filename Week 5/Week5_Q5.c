#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the letter : ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
        printf("Your letter is a vowel");
        break;
    case 'e':
        printf("Your letter is a vowel");
        break;
    case 'i':
        printf("Your letter is a vowel");
        break;
    case 'o':
        printf("Your letter is a vowel");
        break;
    case 'u':
        printf("Your letter is a vowel");
        break;
    case 'A':
        printf("Your letter is a vowel");
        break;
    case 'E':
        printf("Your letter is a vowel");
        break;
    case 'I':
        printf("Your letter is a vowel");
        break;
    case 'O':
        printf("Your letter is a vowel");
        break;
    case 'U':
        printf("Your letter is a vowel");
        break;
    default:
        printf("Consonant or not a letter");
    }
    return 0;
}

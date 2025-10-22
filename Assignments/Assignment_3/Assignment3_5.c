// Accept one character from user and check whether that character is vowel or not.

#include<stdio.h>
#include<stdbool.h>
bool checkVowel(char cValue)
{
    if(cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return true;
    }
    else if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter a character: ");
    scanf("%c", &cValue);

    if(checkVowel(cValue))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}
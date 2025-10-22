// Accept one character from user and convert case of that character.

#include<stdio.h>
char DisplayConvert(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        return cValue + 32;
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        return cValue - 32;
    }
    return cValue;
}

int main()
{
    char cValue = '\0';
    printf("Enter character: ");
    scanf("%c", &cValue);

    char cResult = DisplayConvert(cValue);
    printf("Converted character: %c\n", cResult);

    return 0;
}

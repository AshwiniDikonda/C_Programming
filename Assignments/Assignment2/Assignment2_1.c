// Accept one number from user and print that number of * on screen.
#include <stdio.h>
void DisplayStars(int iNo)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        printf("*\n");
        iNo--;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number of stars to display: ");
    scanf("%d", &iValue);

    DisplayStars(iValue);

    return 0;
}

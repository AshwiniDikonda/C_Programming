// Accept one number and check whether is it divisible by 5 or not.

#include <stdio.h>
#include <stdbool.h>

bool CheckDivisibility(int iNo)
{
    if(iNo%5 == 0)
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
    int iValue = 0;
    bool iRet = false;
    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = CheckDivisibility(iValue);
    if(iRet == true)
    {
        printf("%d is divisible by 5\n", iValue);
    }
    else
    {
        printf("%d is not divisible by 5\n", iValue);
    }

    return 0;
}

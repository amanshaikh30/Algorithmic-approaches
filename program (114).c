////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ChkSpecial
//  Description :       Accept 'N' number from user and check if Special exists or not. 
//  Input :             char 
//  Output :            bool
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

bool ChkSpecial(char cVal)
{

        if((cVal >= 33 && cVal <= 42) || cVal == 94 || cVal == 64)
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
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&cValue);   

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is a Special Character.");
    }
    else
    {
        printf("It is not a Special Character.");
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ChkDigit
//  Description :       Accept Character from user and check whether it a Digit or not. 
//  Input :             char 
//  Output :            bool
//  Author :            Aman Shaikh    
//  Date:               20/11/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL;

bool ChkDigit(char ch) 
{
    if(ch >= 48 && ch <= 57) 
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
    char ch = '\0';
    bool bRet = FALSE;

    printf("Enter the Character : ");
    scanf("%c",&ch);   

    bRet = ChkDigit(ch);

    if(bRet == TRUE) 
    {
        printf("It is a Digit.");
    }
    else
    {
        printf("It is not a Digit.");
    }

    return 0;
}
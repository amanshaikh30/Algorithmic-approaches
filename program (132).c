////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ChkCapital
//  Description :       Accept Character from user and check whether it a Capital alphabet or not. 
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

bool ChkCapital(char ch)
{
    if(ch >= 65 && ch <= 90) 
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

    bRet = ChkCapital(ch);

    if(bRet == TRUE) 
    {
        printf("It is a Capital Alphabet.");
    }
    else
    {
        printf("It is not a Capital Alphabet.");
    }

    return 0;
}
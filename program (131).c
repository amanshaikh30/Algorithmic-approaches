////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ChkAlpha
//  Description :       Accept Character from user and check whether it an alphabet or not. 
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

bool ChkAlpha(char ch)
{
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
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
    char ch;
    bool bRet = FALSE;

    printf("Enter the Character : ");
    scanf(" %c",&ch);   

    bRet = ChkAlpha(ch);

    if(bRet == TRUE) 
    {
        printf("It is an Alphabet.");
    }
    else
    {
        printf("It is not an Alphabet.");
    }

    return 0;
}
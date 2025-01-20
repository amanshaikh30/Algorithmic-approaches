////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ChkSmall
//  Description :       Accept Character from user and check whether it a small alphabet or not. 
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

bool ChkSmall(char ch) 
{
    if(ch >= 97 && ch <= 122) 
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

    bRet = ChkSmall(ch);

    if(bRet == TRUE) 
    {
        printf("It is a small alphabet.");
    }
    else
    {
        printf("It is not a small alphabet.");
    }

    return 0;
}
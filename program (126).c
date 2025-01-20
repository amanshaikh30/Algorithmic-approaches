////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ChkChar
//  Description :       Accept string from user and check whether that character is present or not. 
//  Input :             string 
//  Output :            bool
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL;

bool ChkChar(char *str, char ch)
{
    int iCnt = 0;

    while(str[iCnt] != '\0') 
    {
        if(str[iCnt] == ch)
        {
            return TRUE;
            break;
        }
        iCnt++;
    }
}

int main()
{
    char Arr[20];
    char cValue;
    bool bRet = FALSE;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);   
    getchar();

    printf("Enter the Character : \n");
    scanf("%c",&cValue);  

    bRet = ChkChar(Arr,cValue);

    if(bRet == TRUE) 
    {
        printf("Character is present.");
    }
    else
    {
        printf("Character is not present.");
    }

    return 0;
}
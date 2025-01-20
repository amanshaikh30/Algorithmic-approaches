////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ChkBit
//  Description :       Check whether 5th and 18th Bits are ON or OFF. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               06/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;                       // 0010 0000 0000 0001 0000  // 20010

bool ChkBit(int iNo) 
{
    int iMask = 0x20010, iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter the Value : ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("5th and 18th Bits are ON\n");
    }
    else
    {
        printf("5th and 18th Bits are OFF\n");
    }

    return 0;
}

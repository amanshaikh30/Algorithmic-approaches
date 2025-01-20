////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ChkBit
//  Description :       Check whether 7th, 8th, 9th Bits are ON or OFF. 
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

typedef int BOOL;                       // 0000 0000 0000 0000 0000 0001 1100 0000  // 1c0

bool ChkBit(int iNo) 
{
    int iMask = 0x1c0, iResult = 0;

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
        printf("7th, 8th, 9th Bits are ON\n");
    }
    else
    {
        printf("7th, 8th, 9th Bits are OFF\n");
    }

    return 0;
}

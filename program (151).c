////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ChkBit
//  Description :       Check whether Bit at that position is ON or OFF. 
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

typedef int BOOL;                       // 0000 0000 0000 0000 0000 0000 0000 0001  // 0001

bool ChkBit(int iNo, int iLoc) 
{
    int iMask = 0x0001, iResult = 0;

    iMask = iMask << (iLoc-1);

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
    int iValue = 0, iPos = 0;
    bool bRet = FALSE;

    printf("Enter the Value : ");
    scanf("%d",&iValue);

    printf("Enter the Position : ");
    scanf("%d",&iPos);

    bRet = ChkBit(iValue,iPos);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}

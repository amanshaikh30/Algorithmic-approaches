////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ChkBit
//  Description :       Accept one Integer and two positions from users and check whether 1st or 2nd Bit is ON or OFF. 
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

typedef int BOOL;                       // 0000 0000 0000 0000 0000 1000 0000 0000  // 800 

bool ChkBit(int iNo, int iPos1, int iPos2) 
{
    int iMask = 0x0001, iMas = 0x0001, iResult = 0, iRes = 0;

    iMask = iMask << (iPos1-1);
    iMas = iMas << (iPos2-1);

    iResult = iNo & iMask;
    iRes = iNo & iMas;

    if((iResult == iMask) || (iRes == iMas)) 
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
    int iValue = 0, iLoc1 = 0, iLoc2 = 0;
    bool bRet = FALSE;

    printf("Enter the Value : ");
    scanf("%d",&iValue);

    printf("Enter the first position : ");
    scanf("%d",&iLoc1);

    printf("Enter the second position : ");
    scanf("%d",&iLoc2);

    bRet = ChkBit(iValue,iLoc1,iLoc2);

    if(bRet == TRUE)
    {
        printf("Output : TRUE\n");
    }
    else
    {
        printf("Output : FALSE\n");
    }

    return 0;
}

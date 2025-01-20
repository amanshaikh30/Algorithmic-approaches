////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    OffBit
//  Description :       Accept an Integer and Position from the user and turn OFF the Bit at that Position. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               06/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int OffBit(int iNo, int iLoc) 
{
    int iMask = 0x0001, iResult = 0;          // 0000 0000 0000 0000 0000 0000 0000 0001  // 0001

    iMask = iMask << (iLoc-1);

    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    int iValue = 0, iPos = 0, iRet = 0;

    printf("Enter the Value : ");
    scanf("%d",&iValue);

    printf("Enter the Position : ");
    scanf("%d",&iPos);

    iRet = OffBit(iValue,iPos);

    printf("Output : %d",iRet);

    return 0;
}

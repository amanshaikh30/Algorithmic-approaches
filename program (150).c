////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    OnBit
//  Description :       Accept an number from the user and ON its first 4 Bits. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               06/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int OnBit(int iNo) 
{
    int iMask = 0xf, iResult = 0;          // 0000 0000 0000 0000 0000 0000 0000 1111  // f

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Value : ");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);

    printf("Output : %d",iRet);

    return 0;
}

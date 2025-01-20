////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    OffBit
//  Description :       Accept an number from the user and OFF 7th and 10th Bits of the number if it is ON. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               06/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int OffBit(int iNo) 
{
    int iMask = 0x240, iResult = 0;          // 0000 0000 0000 0000 0000 0010 0100 0000  // 240

    iMask = ~iMask;
    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Value : ");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Output : %d",iRet);

    return 0;
}

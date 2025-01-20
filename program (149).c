////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ToggleBit
//  Description :       Accept a number from the user and Toggle the 7th and 10th Bits of that number. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               06/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int ToggleBit(int iNo) 
{
    int iMask = 0x240, iResult = 0;          // 0000 0000 0000 0000 0000 0010 0100 0000  // 240

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Value : ");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Output : %d",iRet);

    return 0;
}

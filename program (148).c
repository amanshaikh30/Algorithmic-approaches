////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ToggleBit
//  Description :       Accept a number from the user and Toggle the 7th Bit of the number. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               06/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int ToggleBit(int iNo) 
{
    int iMask = 0x40, iResult = 0;          // 0000 0000 0000 0000 0000 0000 0100 0000  // 40

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

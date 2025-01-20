////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ToggleBit                                        *Nibble = 4 Bits*
//  Description :       Accept an Integer from the user and Toggle the first and last Nibble at that Integer. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               06/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int ToggleBit(int iNo) 
{
    int iMask = 0x9, iResult = 0;          // 0000 0000 0000 0000 0000 0000 0000 1001  // 9

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

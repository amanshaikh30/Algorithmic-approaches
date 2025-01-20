/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    MultDigits
//  Description :       Accept number from user and return multiplication of all digits. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               31/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultDigits(int iNo) 
{
    int iDigit = 0, iNum = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;   
        if(iDigit > 0)
        {
            iNum = iNum * iDigit;
        }
    }
    return iNum;
}

int main()
{
    int iValue = 0,iRet = 0; 

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue); 

    printf("%d",iRet);

    return 0;
}
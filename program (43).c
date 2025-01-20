/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountRange
//  Description :       Accept number from user and return count of digits between 3 and 7. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               31/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountRange(int iNo) 
{
    int iDigit = 0, iNum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7) 
        {
            iNum++;
        }
        iNo = iNo / 10;   
    }
    return iNum;
}

int main()
{
    int iValue = 0,iRet = 0; 

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue); 

    printf("%d",iRet);

    return 0;
}
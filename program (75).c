////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    FactorialDiff
//  Description :       Accept 'N' number from user and return difference between Even and Odd factorial of the given number. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               16/11/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iSum = 1, iAns = 1, iNum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--) 
    {
        if((iCnt % 2) == 1) 
        {
            iSum = iSum * iCnt; 
        }
        else 
        {
            iAns = iAns * iCnt; 
        }
    }
    iNum = iAns - iSum;
    return (iNum);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference is : %d",iRet);

    return 0;
}
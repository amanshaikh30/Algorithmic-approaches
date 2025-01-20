/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    RangeSum
//  Description :       Accept range from user and display the addition of all numbers in between that range. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               30/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int RangeSum(int iNo, int iNum)
{
    int iVal = 0, iSum = 0;

    if(iNum < iNo || iNo < 0) 
    {
        printf("Invalid Range!");
        return 0;
    }

    for(iVal = iNo; iVal <= iNum; iVal++)
    {
        iSum = iSum + iVal;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting Value : ");
    scanf("%d",&iValue1);

    printf("Enter ending Value : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    if(iRet > 0)
    {
        printf("Addition is : %d",iRet);
    }
    

    return 0;
}
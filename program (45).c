/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountDiff
//  Description :       Accept number from user and return difference between summation of even digits
//                      and summation of odd digits. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               31/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo) 
{
    int iDigit = 0, iNum = 0, iEven = 0, iOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;   
        if((iDigit % 2) == 0)
        {
            iEven = iEven + iDigit;
        }
        if((iDigit % 2) != 0)
        {
            iOdd = iOdd + iDigit;
        }
        iNum = iEven - iOdd;
    }
    return iNum;
}

int main()
{
    int iValue = 0,iRet = 0; 

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue); 

    printf("%d",iRet);

    return 0;
}
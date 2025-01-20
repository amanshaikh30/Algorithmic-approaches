////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    FactDiff
//  Description :       Accept number from user and return difference between summation 
//                      of all its factors and non factors.
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iNum = 0, iAns = 0,iAnswer = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iNum = 1; iNum < iNo; iNum++) 
    {
        if((iNo % iNum) == 0)
        {
            iAns = iAns + iNum;
        }
        else if ((iNo % iNum) != 0)
        {
            iAnswer = iAnswer + iNum;
        }
    
    }

    return iAns - iAnswer;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue); 

    iRet = FactDiff(iValue);
    printf("%d",iRet);
}
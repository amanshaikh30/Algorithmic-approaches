////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    FactRev
//  Description :       Accept number from user and return summation of its all non factors.
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iNum = 0, iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iNum = 1; iNum < iNo; iNum++) 
    {
        if((iNo % iNum) != 0)
        {
            iAns = iAns + iNum;
        }
    }

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue); 

    iRet = SumNonFact(iValue);
    printf("%d",iRet);
}
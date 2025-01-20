////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    MultFact
//  Description :       It is used to display the no. of multiple of 2 entered by the user
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////  

#include<stdio.h>

int MultFact(int iNo)
{
    int iNum = 0, iAns = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iNum = 1; iNum < iNo; iNum++) 
    {
        if((iNo % iNum) == 0)
        {
            iAns = iAns * iNum;
        }
    }

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue); 

    iRet = MultFact(iValue);
    printf("%d",iRet);
}
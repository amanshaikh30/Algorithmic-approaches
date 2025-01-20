/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountEven
//  Description :       Accept number from user and return count of even digits. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               31/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0, iNum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0) 
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

    iRet = CountEven(iValue); 

    printf("%d",iRet);

    return 0;
}
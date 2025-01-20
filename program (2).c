////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    FactRev
//  Description :       Accept number from user and display its factors in decreasing order.
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

void FactRev(int iNum)
{
    int iNo = 0;

    for(iNo = iNum-1; iNo >= 1; iNo--) 
    {
        if((iNum % iNo) == 0)
        {
            printf("%d\t",iNo);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}
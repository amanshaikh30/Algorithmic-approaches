//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    RangeDisplayEven
//  Description :       Accept range from user and display all the even numbers in between that range. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               30/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplayEven(int iNo, int iNum)
{
    int iVal = 0;

    if(iNum < iNo)
    {
        printf("Invalid Range!");
        return;
    }

    for(iVal = iNo; iVal <= iNum; iVal++)
    {
        if((iVal % 2) == 0)
        {
            printf("%d\t",iVal);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting Value : ");
    scanf("%d",&iValue1);

    printf("Enter ending Value : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}
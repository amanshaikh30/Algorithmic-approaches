////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Pattern
//  Description :       Accept 'N' number from user and display the below pattern. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               16/11/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--) 
    {
        printf("\t %d \t #",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
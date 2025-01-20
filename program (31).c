/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    RangeDisplay
//  Description :       Accept range from user and display all the numbers in between that range. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               30/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplay(int iNo, int iNum)
{
    int iVal = 0;
    if(iNum < iNo)
    {
        printf("Invalid Range");
        return;
    }

    for(iVal = iNo; iVal <= iNum; iVal++)
    {
        printf("%d\t",iVal);
    } 
}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting point : ");
    scanf("%d",&iValue1); 

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
} 
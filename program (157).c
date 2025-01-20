////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CommonBits                                        
//  Description :       Accept two Integers from the user and display common position of ON bits of that Integer. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               06/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define true 1
#define false 0

void CommonBits(int iNo1, int iNo2) 
{
    int iCount = 0;

    printf("Output : ");

    while((iNo1 != 0) || (iNo2 != 0))
    {
        iCount++;
        if((iNo1 & 1) && (iNo2 & 1))  
        {
            printf("%d\t",iCount);
        } 
        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1; 
    } 
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Input : ");
    scanf("%d%d",&iValue1,&iValue2);

    CommonBits(iValue1,iValue2);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountOne                                        
//  Description :       Accept an Integer from the user and count the no. of ON bits of that Integer. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               06/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define true 1
#define false 0

int CountOne(int iNo) 
{
    int iCount = 0;

    while(iNo != 0)
    {
        if(iNo & 1)  
        {
            iCount++; 
        }
        iNo = iNo >> 1; 
    } 

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Value : ");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

    printf("Output : %d\n",iRet);

    return 0;
}

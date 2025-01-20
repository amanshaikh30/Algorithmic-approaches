///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Check
//  Description :       Accept 'N' number from user and return if 11 is present or absent in the numbers. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               11/11/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 2

typedef int BOOL;

bool Check(int Arr[], int iNo)
{
    int iValue = 0, iSum = 0, iNum = 0;

    for(iValue = 0;iValue<iNo;iValue++)
    {
        if(Arr[iValue] == 11)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    bool bRet = false;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}
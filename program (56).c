////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Frequency
//  Description :       Accept 'N' number from user and again take another number and check if the number is present or not. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               11/11/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

bool Check(int Arr[], int iNo, int iNum)
{
    int iValue = 0;

    for(iValue = 0;iValue<iNo;iValue++)
    {
        if(Arr[iValue] == iNum) 
        {
            break;
        }
    }
    if(iValue == iNo)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iNum = 0; 
    bool bRet = false;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the number : \n");
    scanf("%d",&iNum);

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iNum);

    if(bRet == true)
    {
        printf("TRUE");

    }
    else
    {
        printf("FALSE");
    }

    free(p);

    return 0;
}
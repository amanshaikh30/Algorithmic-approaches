///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Range
//  Description :       Accept 'N' number from user and return range between starting number and ending number. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               11/11/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iNo, int iStart, int iEnd)
{
    int iValue = 0;

    for(iValue = 0;iValue < iNo;iValue++)
    {
        if(Arr[iValue] >= iStart && Arr[iValue] <= iEnd) 
        {
            printf("%d\t",Arr[iValue]); 
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iNum = 0, iValue = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Starting number : \n");
    scanf("%d",&iNum);

    printf("Enter the Ending number : \n");
    scanf("%d",&iValue);

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Range(p,iSize,iNum,iValue);

    free(p);

    return 0;
}
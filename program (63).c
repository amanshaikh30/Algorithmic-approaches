///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Difference
//  Description :       Accept 'N' number from user and return the difference between largest and smallest number. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               11/11/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iNo)
{
    int iValue = 0, iSum = Arr[0], iNum = 0, iAns = 0; 

    for(iValue = 0;iValue<iNo;iValue++)
    {
        if(Arr[iValue] < iSum) 
        {
            iSum = Arr[iValue];
        }
        if(Arr[iValue] > iNum)
        {
            iNum = Arr[iValue];
        }
    }

    return (iNum - iSum);
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Difference is : %d",iRet);

    free(p);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Frequency
//  Description :       Accept 'N' number from user and return frequency of 11. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               11/11/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iNo)
{
    int iValue = 0, iSum = 0;

    for(iValue = 0;iValue<iNo;iValue++)
    {
        if(Arr[iValue] == 11)
        {
            iSum++;
        }
    }
    return iSum;
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

    iRet = Frequency(p,iSize);

    printf("Frequency of 11 is : %d",iRet);

    free(p);

    return 0;
}
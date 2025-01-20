///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Product
//  Description :       Accept 'N' number from user and return product of all odd numbers. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               11/11/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iNo)
{
    int iValue = 0, iSum = 1;

    for(iValue = 0;iValue<iNo;iValue++)
    {
        if((Arr[iValue] % 2) == 1) 
        {
            iSum = iSum * Arr[iValue];
        }
    }
    if(iSum > 1)
    {
        return iSum;
    }
    else
    {
        return 0;
    }
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

    iRet = Product(p,iSize);

    printf("Product is : %d",iRet);

    free(p);

    return 0;
}
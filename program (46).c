/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Difference
//  Description :       Accept 'N' number from user and return difference between summation of even elements
//                      and summation of odd elememts. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               11/11/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iNo)
{
    int iValue = 0, iSum = 0, iAns = 0;

    for(iValue = 0;iValue<iNo;iValue++)
    {

        if((Arr[iValue] % 2) == 0)
        {
            iSum = iSum + Arr[iValue];
        }
        else
        {
            iAns = iAns + Arr[iValue];
        }
    }
    return (iSum - iAns);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    printf("Result is : %d\n",iRet);

    free(p);

    return 0;
}
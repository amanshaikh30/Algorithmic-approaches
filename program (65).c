///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    DigitsSum
//  Description :       Accept 'N' number from user and display summation of digits of each number. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               11/11/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iNo)
{
    int iValue = 0, iSum = Arr[0], iNum = 0; 

    for(iValue = 0; iValue < iNo; iValue++)
    {
        iSum = Arr[iValue]; 
        iNum = 0;
        while(iSum != 0)
            {
                iSum = Arr[iValue] % 10;
                Arr[iValue] = Arr[iValue] / 10; 
                iNum = iNum + iSum;
            }
            printf("%d\t",iNum);
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

    printf("Output : ");

    DigitsSum(p,iSize);

    free(p);

    return 0;
}
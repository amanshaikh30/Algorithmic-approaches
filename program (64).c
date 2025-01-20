///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Digits
//  Description :       Accept 'N' number from user and display all such numbers which contains 3 digits in it. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               11/11/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iNo)
{
    int iValue = 0, iSum = Arr[0], iNum = 0, iAns = 0; 

    for(iValue = 0;iValue<iNo;iValue++)
    {
        if(Arr[iValue] > 99 && Arr[iValue] < 1000) 
        {
            printf("%d\t",Arr[iValue]);
        }
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

    Digits(p,iSize);

    free(p);

    return 0;
}
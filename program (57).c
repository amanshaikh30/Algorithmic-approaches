///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    FirstOcc
//  Description :       Accept 'N' number from user and return index of first occurence of that number. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               11/11/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iNo, int iNum)
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
        return -1;
    }
    else
    {
        return iValue;
    }

}

int main()
{
    int iSize = 0, iCnt = 0, iNum = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the specific number : \n");
    scanf("%d",&iNum);

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = FirstOcc(p,iSize,iNum);

    if(iRet == -1)
    {
        printf("There is no such number ");

    }
    else
    {
        printf("First Occurence of that number is at : %d",iRet);
    }

    free(p);

    return 0;
}
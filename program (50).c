///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display
//  Description :       Accept 'N' number from user and display all such elements which are multipes of 11. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               11/11/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iNo)
{
    int iValue = 0;

    for(iValue = 0;iValue<iNo;iValue++)
    {

        if((Arr[iValue] % 11) == 0)
        {
            printf("%d\t",Arr[iValue]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("The elements multiples of 11 are : ");

    Display(p,iSize);

    free(p);

    return 0;
}
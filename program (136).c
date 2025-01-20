////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    StrCpyRev
//  Description :       Accept String from user and display reverse string. 
//  Input :             string 
//  Output :            String
//  Author :            Aman Shaikh    
//  Date:               05/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyRev(char *src, char *dest) 
{
    int iCnt = 0, iCount = 0;    

    while(src[iCnt] != '\0')
    {
        iCnt++;
    }

    for(iCount = iCnt-1; iCount >= 0; iCount--)
    {
        *dest = src[iCount];
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30];

    StrCpyRev(Arr, Brr);

    printf("%s\n", Brr);

    return 0;
}

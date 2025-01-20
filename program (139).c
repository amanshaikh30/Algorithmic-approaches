////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    StrCpySmall
//  Description :       Accept String from user and convert all Capital letters to Small letters from that string. 
//  Input :             string 
//  Output :            String
//  Author :            Aman Shaikh    
//  Date:               05/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpySmall(char *src, char *dest) 
{
    int iCnt = 0, iCount = 0;    

    while(src[iCnt] != '\0')
    {
        if(src[iCnt] >= 'A' && src[iCnt] <= 'Z')
        {
            src[iCnt] = src[iCnt]+32;
        }
        iCnt++;
    } 

    for(iCount = 0; iCount <= iCnt-1; iCount++)
    {
        *dest = src[iCount];
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Python 2";
    char Brr[30];

    StrCpySmall(Arr, Brr);

    printf("%s\n", Brr);

    return 0;
}

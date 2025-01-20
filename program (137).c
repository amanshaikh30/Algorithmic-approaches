////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    StrCpyX
//  Description :       Accept String from user and remove all white spaces from that string. 
//  Input :             string 
//  Output :            String
//  Author :            Aman Shaikh    
//  Date:               05/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyX(char *src, char *dest) 
{
    int iCnt = 0, iCount = 0;    

    while(src[iCnt] != '\0')
    {
        if(src[iCnt] == ' ')
        {
            src[iCnt] = 127;
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
    char Arr[30] = "Marv ell ous P ytho n";
    char Brr[30];

    StrCpyX(Arr, Brr);

    printf("%s\n", Brr);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    strlwrx
//  Description :       Accept string from user and convert it to lower case. 
//  Input :             string 
//  Output :            string
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strlwrx(char *str)
{
    int iCnt = 0, iCount = 0;

    while(str[iCnt] != '\0') 
    {
        if(str[iCnt] >= 65 && str[iCnt] <= 90)
        {
            printf("%c",str[iCnt]+32);
        }
        else
        {
            printf("%c",str[iCnt]);
        } 
        iCnt++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);   

    strlwrx(Arr);

    return 0;
}
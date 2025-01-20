////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    DisplayDigit
//  Description :       Accept string from user and display only Digits. 
//  Input :             string 
//  Output :            string
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(char *str)
{
    int iCnt = 0, iCount = 0;

    while(str[iCnt] != '\0') 
    {
        if(str[iCnt] >= 48 && str[iCnt] <= 57)
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

    DisplayDigit(Arr);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    strTogglex
//  Description :       Accept string from user and toggle the cases. 
//  Input :             string 
//  Output :            string
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strTogglex(char *str)
{
    int iCnt = 0, iCount = 0;

    while(str[iCnt] != '\0') 
    {
        if(str[iCnt] >= 65 && str[iCnt] <= 90)
        {
            printf("%c",str[iCnt]+32);
        }
        else if(str[iCnt] >= 97 && str[iCnt] <= 122)
        {
            printf("%c",str[iCnt]-32);
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

    strTogglex(Arr);

    return 0;
}
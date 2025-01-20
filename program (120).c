////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Reverse
//  Description :       Accept string from user and display it in reverse order. 
//  Input :             string 
//  Output :            string
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Reverse(char *str)
{
    int iCnt = 0, iCount = 0;

    while(str[iCnt] != '\0') 
    {
        iCnt++;
    }
    for(iCount = iCnt-1; iCount >= 0; iCount--) 
    {
        printf("%c",str[iCount]);
    }
}

int main()
{
    char Arr[20];

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);   

    Reverse(Arr);

    return 0;
}
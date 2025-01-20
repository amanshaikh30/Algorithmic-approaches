////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    StrRevX
//  Description :       Accept string from user and reverse that string. 
//  Input :             string 
//  Output :            string
//  Author :            Aman Shaikh    
//  Date:               20/11/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrRevX(char *str)
{
    int iCnt = 0, iSum = 0;

    while(str[iCnt] != '\0') 
    {
        iCnt++;
    }

    for(iSum = iCnt-1; iSum >= 0; iSum--)
    {
        printf("%c",str[iSum]);
    }
    printf("\n");
}

int main()
{
    char Arr[20];

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);   

    printf("Modified string is : ");

    StrRevX(Arr); 

    return 0;
}
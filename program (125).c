////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    WhiteSpace
//  Description :       Accept string from user and count number of white spaces. 
//  Input :             string 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int WhiteSpace(char *str)
{
    int iCnt = 0, iCount = 0;

    while(str[iCnt] != '\0') 
    {
        if(str[iCnt] == 32)
        {
            iCount++;
        }
        iCnt++;
    }
    printf("\n");
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);   

    iRet = WhiteSpace(Arr);

    printf("Count is : %d",iRet);

    return 0;
}
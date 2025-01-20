////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    LastChar
//  Description :       Accept string from user and return the last index number of that character. 
//  Input :             string 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               20/11/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0, iSum = 0;

    while(str[iCnt] != '\0') 
    {
        if(str[iCnt] == ch)
        {
            iSum = iCnt;
        }
        iCnt++;
    }

    if(iSum == 0)
    {
        return -1;
    }
    else
    {
        return iSum;
    }
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);   

    printf("Enter the Character : ");
    scanf(" %c",&cValue);  

    iRet = LastChar(Arr,cValue); 

    printf("Index number is : %d\n",iRet);

    return 0;
}
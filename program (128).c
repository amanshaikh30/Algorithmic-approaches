////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    FirstChar
//  Description :       Accept string from user and return the first index number of that character. 
//  Input :             string 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               20/11/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0, iSum = 0;

    while(str[iCnt] != '\0') 
    {
        if(str[iCnt] == ch)
        {
            iSum = iCnt;
            break; 
        }
        iCnt++;
    }

    if(str[iCnt] == '\0')
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

    iRet = FirstChar(Arr,cValue); 

    printf("Index number is : %d\n",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountCapital
//  Description :       Accept string from user and display count of Capital Letters in that string. 
//  Input :             string 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 65 && *str <= 90)
        {
            iCnt++;
        }
        *str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);   

    iRet = CountCapital(Arr);

    printf("Count is : %d",iRet);

    return 0;
}
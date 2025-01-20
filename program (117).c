////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountSmall
//  Description :       Accept string from user and display count of Small Letters in that string. 
//  Input :             string 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 97 && *str <= 122)
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

    iRet = CountSmall(Arr);

    printf("Count is : %d",iRet);

    return 0;
}
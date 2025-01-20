////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ChkVowel
//  Description :       Accept string from user and check if it contains vowels in it or not. 
//  Input :             string 
//  Output :            bool
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            return true;
        }
        *str++;
    }
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);   

    bRet = ChkVowel(Arr);

    if(bRet == true) 
    {
        printf("It contains vowels in it.");
    }
    else
    {
        printf("It does not contains vowels in it.");
    }

    return 0;
}
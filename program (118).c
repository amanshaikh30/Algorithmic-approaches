////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Difference
//  Description :       Accept string from user and display the difference between count of Small Letters and Capital Letters. 
//  Input :             string 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iSmall = 0, iCap = 0;

    while(*str != '\0')
    {
        if(*str >= 65 && *str <= 90)
        {
            iCap++;
        }
        else if(*str >= 97 && *str <= 122)
        {
            iSmall++;
        }
        *str++; 
    }
    return (iSmall-iCap);
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);   

    iRet = Difference(Arr);

    printf("Difference is : %d",iRet);

    return 0;
}
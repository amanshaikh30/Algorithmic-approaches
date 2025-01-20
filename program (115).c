////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display
//  Description :       Accept 'N' number from user and display its ASCII value in decimal,octal and hexadecimal. 
//  Input :             char 
//  Output :            char
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char cVal)
{
        printf("Decimal is : %d\n",cVal);
        printf("Octal is : %o\n",cVal);
        printf("HexaDecimal is : 0X%x\n",cVal);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);   

    Display(cValue);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display
//  Description :       Accept 'N' number from user and convert smaller case into upper case and vice-versa. 
//  Input :             char 
//  Output :            char
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char cVal)
{

        if(cVal >= 65 && cVal <= 90)
        {
            printf("Your Output is : %c\n",cVal+32);
        } 
        else if(cVal >= 97 && cVal <= 122)
        {
            printf("Your Output is : %c\n",cVal-32);
        }
        else
        {
            printf("Your Output is : %c\n",cVal);
        }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);   

    Display(cValue);

    return 0;
}
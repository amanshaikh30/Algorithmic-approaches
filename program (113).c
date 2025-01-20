////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display
//  Description :       Accept 'N' number from user and display all Characters till the End of the Alphabet.. 
//  Input :             char 
//  Output :            char
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char cVal)
{
        int i = 0;

        if(cVal >= 65 && cVal <= 90)
        {
            for(i = cVal; i <= 90; i++)
            {
                printf("%c\t",i);
            }
        } 
        else if(cVal >= 97 && cVal <= 122)
        {
            for(i = cVal; i >= 97; i--)
            {
                printf("%c\t",i);
            }
        }
        else
        {
            return;
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
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    DisplayASCII
//  Description :       Accept 'N' number from user and display members from 0 to 255 from ASCII Table. 
//  Input :             - 
//  Output :            char
//  Author :            Aman Shaikh    
//  Date:               19/11/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int i = 0;
    char ch = 1;

    for(i = 0; i <= 255; i++) 
    {
        printf("%c\n",ch); 
        ch++;
    }
}

int main()
{
    DisplayASCII();

    return 0;
}
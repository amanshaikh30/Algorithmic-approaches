////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display                                        
//  Description :       Write a Recursive program and Display Capital Letters. 
//  Input :             int 
//  Output :            char
//  Author :            Aman Shaikh    
//  Date:               15/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Display() 
{
    static char ch = 'A'; 

    if(ch <= 'F') 
    {
        printf("%c\t",ch);
        ch++;
        Display(); 
    }
}

int main()
{
    Display();

    return 0;
}

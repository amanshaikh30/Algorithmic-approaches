////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display                                        
//  Description :       Write a Recursive program and Display "*". 
//  Input :             int 
//  Output :            char
//  Author :            Aman Shaikh    
//  Date:               15/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Display() 
{
    static int i = 1;

    if(i<=5) 
    {
        printf("*\t");
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}

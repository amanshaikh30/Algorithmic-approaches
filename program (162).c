////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display                                        
//  Description :       Write a Recursive program and Display numbers. 
//  Input :             int 
//  Output :            int
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
        printf("%d\t",i);
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}

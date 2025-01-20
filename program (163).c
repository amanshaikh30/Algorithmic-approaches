////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display                                        
//  Description :       Write a Recursive program and Display numbers in reverse order. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               15/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Display() 
{
    static int i = 5; 

    if(i>=1) 
    {
        printf("%d\t",i);
        i--;
        Display(); 
    }
}

int main()
{
    Display();

    return 0;
}

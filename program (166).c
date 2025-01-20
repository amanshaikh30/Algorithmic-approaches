////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display                                        
//  Description :       Accept number from user and write a Recursive program and Display " * ". 
//  Input :             int 
//  Output :            char
//  Author :            Aman Shaikh    
//  Date:               15/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Display(int iNo) 
{
    static int i = 1;

    if(i<=iNo) 
    {
        printf("*\t");
        i++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : "); 
    scanf("%d",&iValue);

    printf("Output is :\t");

    Display(iValue);

    return 0;
}

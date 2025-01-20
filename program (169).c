/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display                                        
//  Description :       Accept number from user and write a Recursive program and Display Capital letters. 
//  Input :             int 
//  Output :            char
//  Author :            Aman Shaikh    
//  Date:               15/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Display(int iNo) 
{
    static char ch = 65;

    if(ch <= 64+iNo) 
    {
        printf("%c\t",ch); 
        ch++;   
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

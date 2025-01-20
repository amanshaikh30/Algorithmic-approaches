////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display                                        
//  Description :       Accept number from user and write a Recursive program and Display the numbers in descending order. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               15/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Display(int iNo) 
{
    if(iNo>=1) 
    {
        printf("%d\t",iNo);
        iNo--;
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

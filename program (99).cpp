/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display                                        
//  Description :       Accept number from user and write a Recursive program and Display numbers and " * " in decreasing order. 
//  Input :             int 
//  Output :            int and char
//  Author :            Aman Shaikh    
//  Date:               15/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Pattern
{
    public:
    int Display(int iNo) 
    {
        if(iNo >= 1) 
        {
            printf("%d\t*\t",iNo); 
            iNo--;   
            Display(iNo);              
        } 
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number : "; 
    cin>>iValue;

    cout<<"Output is :\t";

    Pattern pobj;

    pobj.Display(iValue);

    return 0;
}

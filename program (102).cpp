/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Sum                                        
//  Description :       Accept number from user and return its Factorial using Recursion. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               15/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Pattern
{
    public:
    int Sum(int iNo) 
    {
        static int iFact = 1; 

        if(iNo >= 1) 
        {
            iFact = iFact * iNo;
            iNo--;
            Sum(iNo);
        } 
        return iFact;
    }
};

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : "; 
    cin>>iValue;

    Pattern pobj;
    iRet = pobj.Sum(iValue);

    cout<<"Factorial is :\t"<<iRet;

    return 0;
}

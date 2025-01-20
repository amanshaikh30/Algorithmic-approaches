/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Reverse                                        
//  Description :       Accept number from user and return Reverse of that number using Recursion.
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
    int Reverse(int iNo) 
    {
        int iNum = 0;
        static int iReverse = 0; 

        if(iNo != 0) 
        {
            iNum = iNo % 10;
            iReverse = iNum + (iReverse * 10);
            iNo = iNo / 10;
            Reverse(iNo);
        } 
        return iReverse;
    }
};

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : "; 
    cin>>iValue;

    Pattern pobj;
    iRet = pobj.Reverse(iValue);

    cout<<"Reverse is : "<<iRet<<"\n";

    return 0;
}

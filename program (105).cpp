/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Max                                        
//  Description :       Accept number from user and return largest digit in that number using Recursion.
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
    int Max(int iNo) 
    {
        int iNum = 0;
        static int iMax = 0; 

        if(iNo != 0) 
        {
            iNum = iNo % 10;
            if(iNum > iMax)
            {
                iMax = iNum;
            }
            iNo = iNo / 10;
            Max(iNo);
        } 
        return iMax;
    }
};

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : "; 
    cin>>iValue;

    Pattern pobj;
    iRet = pobj.Max(iValue);

    cout<<"Output is : "<<iRet<<"\n";

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Min                                        
//  Description :       Accept number from user and return smallest digit in that number using Recursion.
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
    int Min(int iNo) 
    {
        int iNum = 0;
        static int iMin = 9; 

        if(iNo != 0) 
        {
            iNum = iNo % 10;
            if(iNum < iMin) 
            {
                iMin = iNum;
            }
            iNo = iNo / 10;
            Min(iNo);
        } 
        return iMin;
    }
};

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : "; 
    cin>>iValue;

    Pattern pobj;
    iRet = pobj.Min(iValue);

    cout<<"Output is : "<<iRet<<"\n";

    return 0;
}

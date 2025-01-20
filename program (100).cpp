/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Sum                                        
//  Description :       Accept number from user and write a Recursive program and return summation of its digits. 
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
        int iNum = 0;
        static int iSum = 0; 

        if(iNo != 0) 
        {
            iNum = iNo % 10;
            iSum = iSum + iNum;
            iNo = iNo / 10;
            Sum(iNo);
        } 
        return iSum;
    }
};

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : "; 
    cin>>iValue;

    Pattern pobj;
    iRet = pobj.Sum(iValue);

    cout<<"Summation is :\t"<<iRet;

    return 0;
}

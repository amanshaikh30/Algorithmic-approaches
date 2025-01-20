/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Mult                                        
//  Description :       Accept number from user and return product of its digit using Recursion.
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
    int Mult(int iNo) 
    {
        int iNum = 0;
        static int iMult = 1; 

        if(iNo != 0) 
        {
            iNum = iNo % 10;
            if(iNum != 0)
            {
                iMult = iMult * iNum;
            }
            iNo = iNo / 10;
            Mult(iNo);
        } 
        return iMult;
    }
};

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : "; 
    cin>>iValue;

    Pattern pobj;
    iRet = pobj.Mult(iValue);

    cout<<"Product is : "<<iRet<<"\n";

    return 0;
}

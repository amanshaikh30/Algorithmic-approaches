/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    WhiteSpace                                        
//  Description :       Accept string from user and count no. of white spaces using Recursion.
//  Input :             string 
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
    int WhiteSpace(char *str) 
    {
        static int iNum = 0;

        if(*str != '\0') 
        {
            if(*str == ' ') 
            {
                iNum++;
            }
            str++;
            WhiteSpace(str); 
        } 
        return iNum;
    }
};

int main()
{
    int iRet = 0;
    char Arr[30];

    cout<<"Enter the String : "; 
    cin.getline(Arr,30);

    Pattern pobj;
    iRet = pobj.WhiteSpace(Arr);

    cout<<"Count is : "<<iRet<<"\n";

    return 0;
}

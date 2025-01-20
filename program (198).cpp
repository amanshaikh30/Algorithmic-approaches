/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Small                                        
//  Description :       Accept string from user and count no. of small letters using Recursion.
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
    int Small(char *str) 
    {
        static int iNum = 0;

        if(*str != '\0') 
        {
            if(*str >= 97 && *str <= 120) 
            {
                iNum++;
            }
            str++;
            Small(str); 
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
    iRet = pobj.Small(Arr);

    cout<<"Count is : "<<iRet<<"\n";

    return 0;
}

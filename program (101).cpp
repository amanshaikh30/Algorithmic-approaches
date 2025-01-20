/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Strlen                                        
//  Description :       Accept string from user and write a Recursive program and count no. of characters. 
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
    int Strlen(char *str) 
    {
        static int iNum = 0;

        if(*str != '\0') 
        {
            iNum++;
            str++;
            Strlen(str); 
        } 
        return iNum;
    }
};

int main()
{
    int iRet = 0;
    char Arr[30];

    cout<<"Enter the String : "; 
    cin>>Arr;

    Pattern pobj;
    iRet = pobj.Strlen(Arr);

    cout<<"Count is : "<<iRet;

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    FirstOcc
//  Description :       Accept another number and return first index of that number.
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               14/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{
    public int FirstOcc(int Arr[], int iNo) 
    {
        int i = 0, j = 0;
        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == iNo)
            {
                j = i; 
                break;
            }
        } 
        return j;
    } 
}

class Assignment39B
{ 
    public static void main(String Arr[])
    {
        int iValue1 = 0, iValue2 = 0, i = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter frequency : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number to search : "); 
        iValue2 = sobj.nextInt();  

        System.out.println("Enter numbers : ");

        int Brr[] = new int[iValue1];
        for(i = 0; i < iValue1; i++)
        {
            Brr[i] = sobj.nextInt();
        } 

        Number nobj = new Number();
        int iResult = nobj.FirstOcc(Brr,iValue2); 

        System.out.println("Output is : "+iResult);
    }
}
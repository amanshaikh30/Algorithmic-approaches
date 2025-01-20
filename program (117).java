////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display
//  Description :       Accept 2 numbers and display range of that number.
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               14/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{
    public void Display(int Arr[], int iStart, int iEnd) 
    {
        int i = 0, j = 0;
        System.out.println("Numbers in that range are : ");
        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= iStart && Arr[i] <= iEnd) 
            {
                System.out.println(Arr[i]); 
            } 
        } 
    } 
}

class Assignment39D
{ 
    public static void main(String Arr[])
    {
        int iValue1 = 0, iValue2 = 0, iValue3 = 0, i = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter frequency : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Start number : "); 
        iValue2 = sobj.nextInt();
        
        System.out.println("Enter Last number : "); 
        iValue3 = sobj.nextInt();  

        System.out.println("Enter numbers : ");

        int Brr[] = new int[iValue1];
        for(i = 0; i < iValue1; i++)
        {
            Brr[i] = sobj.nextInt();
        } 

        Number nobj = new Number();
        nobj.Display(Brr,iValue2,iValue3); 
    }
}
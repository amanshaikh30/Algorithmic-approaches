////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display
//  Description :       Display all such elememts which are even and divisible by 5. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               14/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class ArrayDemo
{
    public void Display(int Arr[])
    {
        System.out.println("Divisible by 5 and even numbers are : ");

        int i = 0, iDiv = 0;
        for(i = 0; i < Arr.length; i++) 
        {
            if(Arr[i]%5 == 0 && Arr[i]%2 == 0)
            {
                System.out.println(Arr[i]);
            }
        }   
    }
}

class Assignment37C
{
    public static void main(String Arr[])
    {
        int iValue = 0, iCnt = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter frequency : ");
        iValue = sobj.nextInt(); 

        int Brr[] = new int[iValue]; 

        System.out.println("Enter the numbers : ");
        for(iCnt = 0; iCnt < iValue; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt(); 
        }

        ArrayDemo aobj = new ArrayDemo();
        aobj.Display(Brr); 
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Product
//  Description :       Accept another number and return product of all odd numbers.
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               14/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{
    public int Product(int Arr[]) 
    {
        int i = 0, j = 1;
        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i]%2 != 0)
            {
                j = j * Arr[i]; 
            }
        } 
        if(j>1)
        {
            return j;
        }
        else
        {
            return 0;
        }
    } 
}

class Assignment39E
{ 
    public static void main(String Arr[]) 
    {
        int iValue1 = 0, i = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter frequency : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter numbers : ");

        int Brr[] = new int[iValue1];
        for(i = 0; i < iValue1; i++)
        {
            Brr[i] = sobj.nextInt();
        } 

        Number nobj = new Number();
        int iResult = nobj.Product(Brr); 

        System.out.println("Product is : "+iResult);
    }
}
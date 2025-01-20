////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Difference
//  Description :       Return Difference between summation of even elements and odd elements. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               14/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class ArrayDemo
{
    public int Difference(int Arr[], int iNo)
    {
        int i = 0, iEven = 0, iOdd = 0;
        for(i = 0; i < iNo; i++)
        {
            if(Arr[i]%2 == 0)
            {
                iEven = iEven + Arr[i];
            }
            else if(Arr[i]%2 != 0)
            {
                iOdd = iOdd + Arr[i];
            }
        }
        return iEven-iOdd;
        
    }
}

class Assignment37A
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
        int iResult = aobj.Difference(Brr,iValue); 

        System.out.println("Difference is : "+iResult);
    }
}
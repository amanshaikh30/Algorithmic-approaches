////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountOdd
//  Description :       Return the count of Odd digits. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               14/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digit
{
    public int CountOdd(int iNo)
    {
        int i = 0, iCnt = 0;
        while(iNo != 0)
        {
            i = iNo % 10;
            if(i%2 != 0)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
        
    }
}

class Assignment38B
{
    public static void main(String Arr[])
    {
        int iValue = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        iValue = sobj.nextInt();  

        Digit aobj = new Digit();
        int iResult = aobj.CountOdd(iValue); 

        System.out.println("Count of Odd numbers is : "+iResult);
    }
}
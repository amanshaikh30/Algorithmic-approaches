////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountRange
//  Description :       Return the count of digits between 3 and 7. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               14/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digit
{
    public int CountRange(int iNo)
    {
        int i = 0, iCnt = 0;
        while(iNo != 0)
        {
            i = iNo % 10;
            if(i > 3 && i < 7)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
        
    }
}

class Assignment38C
{
    public static void main(String Arr[])
    {
        int iValue = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        iValue = sobj.nextInt();  

        Digit aobj = new Digit();
        int iResult = aobj.CountRange(iValue); 

        System.out.println("Count of numbers is : "+iResult);
    }
}
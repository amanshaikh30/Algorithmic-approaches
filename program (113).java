////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountDiff
//  Description :       Return the Difference between summation of even elements and odd elements. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               14/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digit
{
    public int CountDiff(int iNo)
    {
        int i = 0, iCnt = 0, iCount = 0;
        while(iNo != 0)
        {
            i = iNo % 10;
            if(i%2 != 0 && i != 0)
            {
                iCnt = iCnt + i;
            }
            else if(i%2 == 0 && i != 0)
            {
                iCount = iCount + i;
            } 
            iNo = iNo / 10;
        }
        return iCount-iCnt;
        
    }
}

class Assignment38E
{
    public static void main(String Arr[])
    {
        int iValue = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        iValue = sobj.nextInt();  

        Digit aobj = new Digit();
        int iResult = aobj.CountDiff(iValue); 

        System.out.println("Difference is : "+iResult);
    }
}
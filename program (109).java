////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountEven
//  Description :       Return the count of Even digits. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               14/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digit
{
    public int CountEven(int iNo)
    {
        int i = 0, iCnt = 0;
        while(iNo != 0)
        {
            i = iNo % 10;
            if(i%2 == 0)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
        
    }
}

class Assignment38A
{
    public static void main(String Arr[])
    {
        int iValue = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        iValue = sobj.nextInt();  

        Digit aobj = new Digit();
        int iResult = aobj.CountEven(iValue); 

        System.out.println("Count of Even numbers is : "+iResult);
    }
}
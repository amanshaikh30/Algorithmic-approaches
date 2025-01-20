////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Multiply
//  Description :       Return the multiplication of all digits. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               14/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digit
{
    public int Multiply(int iNo)
    {
        int i = 0, iCnt = 1;
        while(iNo != 0)
        {
            i = iNo % 10;
            if(i != 0)
            {
                iCnt = iCnt * i;
            }
            iNo = iNo / 10;
        }
        return iCnt;
        
    }
}

class Assignment38D
{
    public static void main(String Arr[])
    {
        int iValue = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        iValue = sobj.nextInt();  

        Digit aobj = new Digit();
        int iResult = aobj.Multiply(iValue); 

        System.out.println("Multiplication is : "+iResult);
    }
}
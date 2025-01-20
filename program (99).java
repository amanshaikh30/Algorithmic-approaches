////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountCapital
//  Description :       Count Capital Letters in the hardcoded String. 
//  Input :             String 
//  Output :            String
//  Author :            Aman Shaikh    
//  Date:               14/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class StringDemo
{
    public int CountCapital(String str)
    {
        int iCnt = 0, i = 0;
        while(i < str.length()) 
        {
            char ch = str.charAt(i);
            if(ch >= 'A' && ch <= 'Z')
            {
                iCnt++;
            } 
            i++;
        }
        return iCnt;
    }
}

class Assignment36A
{
    public static void main(String Arr[])
    {
        String s1 = "Marvellous Multi OS";
        StringDemo sobj = new StringDemo();
        int iResult = sobj.CountCapital(s1);
        System.out.println("Capital Numbers are : "+iResult);
    }
}
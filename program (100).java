////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountSmall
//  Description :       Count Small Letters in the hardcoded String. 
//  Input :             String 
//  Output :            String
//  Author :            Aman Shaikh    
//  Date:               14/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class StringDemo
{
    public int CountDiff(String str)
    {
        int iCnt = 0, i = 0, iCount = 0;
        while(i < str.length()) 
        {
            char ch = str.charAt(i);
            if(ch >= 'a' && ch <= 'z')
            {
                iCnt++;
            } 
            else if(ch >= 'A' && ch <= 'Z')
            {
                iCount++;
            }
            i++;
        }
        return (iCnt-iCount);
    }
}

class Assignment36C
{
    public static void main(String Arr[])
    {
        String s1 = "MarvellouS";
        StringDemo sobj = new StringDemo();
        int iResult = sobj.CountDiff(s1);
        System.out.println("Difference : "+iResult);
    }
}
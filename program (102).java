////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ChkVowel
//  Description :       Accept String from user and return true if Vowel is found. 
//  Input :             String 
//  Output :            bool
//  Author :            Aman Shaikh    
//  Date:               14/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class StringDemo
{
    public boolean ChkVowel(String str)
    {
        int iCnt = 0, i = 0;
        while(i < str.length()) 
        {
            char ch = str.charAt(i);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                return true;
            } 
            i++;
        }
        return false;
    }
}

class Assignment36D
{
    public static void main(String Arr[])
    {
        Scanner ssobj = new Scanner(System.in);
        System.out.println("Enter the String : ");
        String s1 = ssobj.nextLine(); 

        StringDemo sobj = new StringDemo();
        boolean bResult = sobj.ChkVowel(s1);
        System.out.println(bResult);
    }
}
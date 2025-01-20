////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Reverse
//  Description :       Accept String from user and display the String in reverse. 
//  Input :             String 
//  Output :            String
//  Author :            Aman Shaikh    
//  Date:               14/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class StringDemo
{
    public void Reverse(String str)
    {
        StringBuilder s2 = new StringBuilder();
        int i = str.length() - 1;
        while(i >= 0) 
        {
            s2.append(str.charAt(i));
            i--;
        }
        System.out.println("Reversed String: " + s2.toString());
    }
}

class Assignment36E 
{
    public static void main(String Arr[])
    {
        Scanner ssobj = new Scanner(System.in);
        System.out.println("Enter the String : ");
        String s1 = ssobj.nextLine(); 

        StringDemo sobj = new StringDemo();
        sobj.Reverse(s1); 
    }
}
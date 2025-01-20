////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    DisplaySchedule
//  Description :       Accept Division from user and display their exam time based on their Division. 
//  Input :             char 
//  Output :            String
//  Author :            Aman Shaikh    
//  Date:               20/11/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplaySchedule(char ch) 
{
    if(ch == 97 || ch == 65) 
    {
        printf("Your Exam is at 7 AM \n");
    }
    else if(ch == 98 || ch == 66) 
    {
        printf("Your Exam is at 8.30 AM \n");
    }
    else if(ch == 99 || ch == 67) 
    {
        printf("Your Exam is at 9.20 AM \n");
    }
    else if(ch == 100 || ch == 68) 
    {
        printf("Your Exam is at 10.30 AM \n");
    }
    else
    {
        printf("Invalid Input! \n");
        return;
    }
    
}

int main()
{
    char ch = '\0';

    printf("Enter your Division : ");
    scanf("%c",&ch);   

    printf("Result: ");

    DisplaySchedule(ch);

    return 0;
}
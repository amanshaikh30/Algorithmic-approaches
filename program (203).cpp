/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    DisplayPalindrome                                        
//  Description :       Accept numbers from user and Display Palindrome elements in the Singly Linear LinkedList.
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               25/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
    PNODE head;

    SinglyLL()
    {
        head = NULL;
    }

    void InsertFirst(int no)
    {
        PNODE newn = NULL;

        newn = new NODE;
        newn->data  = no;
        newn->next = NULL;

        if(head == NULL)
        {
            head = newn;
        }
        else
        {
            newn->next = head;
            head = newn;
        }
    }

    void Display()
    {
        PNODE temp = head;

        while(temp != NULL)
        {
            cout<<"| "<<temp->data<<" | -> ";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }

    void DisplayPalindrome()
    {
        PNODE temp = head;
        
        while(temp != NULL)
        {
            int num = temp->data;
            int originalNum = num;
            int reversedNum = 0;
            int remainder;

            while(num != 0)
            {
                remainder = num % 10;
                reversedNum = reversedNum * 10 + remainder;
                num /= 10;
            }
            if(originalNum == reversedNum) 
            {
                cout<<"| "<<temp->data<<" | -> ";
            }
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
};

int main()
{
    int iValue1 = 0, iValue2 = 0, i = 0;

    SinglyLL sobj;

    cout<<"Enter the Frequency : ";
    cin>>iValue1;

    cout<<"Enter the numbers : \n";

    for(i = 1; i <= iValue1; i++)
    {
        cin>>iValue2;
        sobj.InsertFirst(iValue2);
    }

    sobj.Display();
    sobj.DisplayPalindrome();

    return 0;
}
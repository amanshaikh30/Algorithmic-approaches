/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Minimum                                        
//  Description :       Accept number from user and return smallest numbers in the Singly Linear LinkedList.
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               24/12/2024 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        (*head) = newn;
    }
}

int Minimum(PNODE head)
{
    PNODE temp = head;
    int iCnt = head->data;

    while(temp !=  NULL)
    {
        if(temp->data < iCnt)
        {
            iCnt = temp->data;
        }
        temp = temp->next; 
    } 
    return iCnt;
}

void Display(PNODE head)
{
    PNODE temp = head;

    while(temp !=  NULL)
    {
        printf("| %d | -> ",temp->data);
        temp = temp->next; 
    } 
    printf("NULL\n");
}

int main()
{
    PNODE first = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&first,640);
    InsertFirst(&first,240);
    InsertFirst(&first,20);
    InsertFirst(&first,230);
    InsertFirst(&first,110);

    Display(first);

    iRet = Minimum(first);
    printf("Smallest number is : %d\n",iRet);

    return 0;
}
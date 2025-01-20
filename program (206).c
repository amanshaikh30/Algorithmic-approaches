/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    SecMaximum                                        
//  Description :       Accept numbers from user and return the second largest number in the Singly Linear LinkedList.
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

int SecMaximum(PNODE head)
{
    int iCnt = head->data, i = 0;
    PNODE temp = head->next;
    
    while(temp !=  NULL)
    {
        if(temp->data > iCnt) 
        {
            iCnt = temp->data;
        } 
        else if(temp->data > i && temp->data < iCnt)
        {
            i = temp->data;
        }
        temp = temp->next; 
    } 
    return i;
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
    int iValue = 0, i = 0, iValue2 = 0, iRet = 0;

    printf("Enter the Frequency : ");
    scanf("%d",&iValue);

    printf("Enter the Numbers : \n");

    for(i = 1; i <= iValue; i++)
    {
        scanf("%d",&iValue2);
        InsertFirst(&first,iValue2);
    }

    Display(first);

    iRet = SecMaximum(first);
    printf("Second Max number is : %d\n",iRet);

    return 0;
}
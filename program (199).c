/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    SearchLastOcc                                        
//  Description :       Accept number from user and return last occurence of that number in the Singly Linear LinkedList.
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

int SearchLastOcc(PNODE head, int no)
{
    PNODE temp = head;
    int iCnt = 0, iCount = 0;

    while(temp !=  NULL)
    {
        iCnt++;
        if(temp->data == no)
        {
            iCount = iCnt;
        }
        temp = temp->next; 
    } 
    return iCount;
}

int main()
{
    PNODE first = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&first,70);
    InsertFirst(&first,30);
    InsertFirst(&first,50);
    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = SearchLastOcc(first,iValue);
    printf("Last Occurence is : %d\n",iRet);

    return 0;
}
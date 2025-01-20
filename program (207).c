/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    SumDigit                                        
//  Description :       Accept numbers from user and display Addition of digits of each element in the Singly Linear LinkedList.
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

int SumDigit(PNODE head)
{
    PNODE temp = head;
    int i = 0, iSum = 0;

    while(temp != NULL)
    {
        iSum = 0;

        while(temp->data != 0)
        {
            i = (temp->data) % 10;
            iSum = iSum + i;
            temp->data = (temp->data) / 10;
        }
        printf("%d\t",iSum);
        temp = temp->next;
    }
    printf("\n");
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

    SumDigit(first);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    DisplayPrime                                        
//  Description :       Accept number from user and display the prime numbers in the Singly Linear LinkedList.
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

int isPrime(int num)
{
    for(int i = 3; i <= num / 2; i += 2)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void DisplayPrime(PNODE head)
{
    PNODE temp = head;

    while(temp != NULL)
    {
        if(isPrime(temp->data))
        {
            printf("%d\t", temp->data);
        }
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
    int iValue = 0, i = 0, iValue2 = 0;

    printf("Enter the Frequency : ");
    scanf("%d",&iValue);

    printf("Enter the Numbers : \n");

    for(i = 1; i <= iValue; i++)
    {
        scanf("%d",&iValue2);
        InsertFirst(&first,iValue2);
    }

    Display(first);

    printf("Prime numbers are: ");
    DisplayPrime(first);

    return 0;
}
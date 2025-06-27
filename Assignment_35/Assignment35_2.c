#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0


typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}
void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |-> ",Head->Data);
        Head = Head->Next;
    }
}

int Count(PNODE Head)
{
    int iCount = 0;

        while(Head != NULL)
    {
        iCount++;
        Head = Head->Next;
    }
    return iCount;
}

void DisplayPrime(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {   
        for(iCount = 2;iCount <= Head->Data/2;iCount++)
        {
            if(Head->Data % iCount == 0)
            {
                break;
            }
            
        }
        if(iCount > Head->Data/2)
        {
            printf("\nThe %d is a prime number.\n", Head->Data);
        }
        Head = Head->Next;      
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,22);
    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);
    iRet = Count(First);
    DisplayPrime(First);

    return 0;
}

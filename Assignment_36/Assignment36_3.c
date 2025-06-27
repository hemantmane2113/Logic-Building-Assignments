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

void DisplayProduct(PNODE Head)
{
    int iCount = 0;
    int iNum = Head->Data;
    int iDigit = 0;
    int iProduct = 1;

    while(Head != NULL)
    {   
        iNum = Head->Data;
        iProduct = 1;
        while(iNum != 0)
        {
            iDigit = iNum % 10;
            if(iDigit != 0)
            {
              iProduct = iProduct * iDigit;  
            }

            iNum = iNum / 10; 
        }
        printf("\nThe products of digits of %d is %d\n",Head->Data,iProduct);
        Head = Head->Next;      
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,22);
    InsertFirst(&First,89);
    InsertFirst(&First,60);
    InsertFirst(&First,41);
    InsertFirst(&First,107);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);
    iRet = Count(First);
    DisplayProduct(First);

    return 0;
}

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

void DisplayReverse(PNODE Head)
{
    int iCount = 0;
    int iNum = Head->Data;
    int iDigit = 0;
    int iReverse = 0;

    while(Head != NULL)
    {   
        iNum = Head->Data;
        iReverse = 0;
        while(iNum != 0)
        {
            iDigit = iNum % 10;
            iReverse = iReverse * 10 + iDigit;

            iNum = iNum / 10; 
        }
        printf("\nThe reverse number  of %d is %d\n",Head->Data,iReverse);
        Head = Head->Next;      
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,53);
    InsertFirst(&First,89);
    InsertFirst(&First,65);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,15);

    Display(First);
    iRet = Count(First);
    DisplayReverse(First);

    return 0;
}

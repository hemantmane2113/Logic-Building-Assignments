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

void DisplaySmallDigit(PNODE Head)
{
    int iCount = 0;
    int iNum = 0;
    int iDigit = 0;
    int iSmall = 0;

    while(Head != NULL)
    {   
        iNum = Head->Data;
        iSmall = iNum % 10;

        while(iNum != 0)
        {
            iDigit = iNum % 10;
            if(iSmall > iDigit)
            {
                iSmall = iDigit;
            }
            iNum = iNum / 10; 
        }
        printf("\nThe smallest digits of %d is %d\n",Head->Data,iSmall);
        Head = Head->Next;      
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,2021);
    InsertFirst(&First,5454);
    InsertFirst(&First,6616);
    InsertFirst(&First,5689);
    InsertFirst(&First,6787);
    InsertFirst(&First,6345);
    InsertFirst(&First,2543);

    Display(First);
    iRet = Count(First);
    DisplaySmallDigit(First);

    return 0;
}

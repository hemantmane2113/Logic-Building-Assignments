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
    return iCount++;
}

int SecMaximum(PNODE Head)
{
    int iMax1 = -1;
    int iMax2 = -1;

    while(Head != NULL)
    {   
        if(iMax1 < Head->Data) 
        {   
            iMax2 = iMax1;
            iMax1 = Head->Data;
        }
        else if((iMax1 > Head->Data)&&((iMax2 < Head->Data)||(iMax2 == -1)))
        {
            iMax2 = Head->Data;
        }
        Head = Head->Next;
    }
    return iMax2;
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int Max = 0;

    InsertFirst(&First,70);
    InsertFirst(&First,80);
    InsertFirst(&First,50);
    InsertFirst(&First,78);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,15);

    Display(First);
    iRet = Count(First);

    Max = SecMaximum(First);
    printf("\nThe second Maximum number from linked list is %d",Max);


    return 0;
}

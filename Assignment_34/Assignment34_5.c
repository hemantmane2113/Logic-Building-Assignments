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

int Minimum(PNODE Head)
{
    int iMin = Head->Data;

    while(Head != NULL)
    {   
        
        if(iMin > Head->Data) 
        {
            iMin = Head->Data;
            
        }
        Head = Head->Next;

    }
    return iMin;
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int Min = 0;

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,80);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);
    iRet = Count(First);

    Min = Minimum(First);
    printf("\nThe Minimum number from linked list is %d",Min);


    return 0;
}

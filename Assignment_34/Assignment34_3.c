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

int Addition(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {   
  
       iSum = Head->Data + iSum;

       Head = Head->Next;       
    }
    return iSum;
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int Add = 0;


    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);
    iRet = Count(First);
    Add = Addition(First);
    printf("\nThe sum of all numbers in linked list is  %d",Add);


    return 0;
}

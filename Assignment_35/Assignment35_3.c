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

int AdditionEven(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {  
        if(Head->Data % 2 == 0) 
        {
            iSum = Head->Data + iSum;
        }
        Head = Head->Next;       
    }
    return iSum;
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int Add = 0;


    InsertFirst(&First,77);
    InsertFirst(&First,41);
    InsertFirst(&First,50);
    InsertFirst(&First,32);
    InsertFirst(&First,33);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);
    iRet = Count(First);
    Add = AdditionEven(First);
    printf("\nThe sum of even numbers in linked list is  %d",Add);


    return 0;
}

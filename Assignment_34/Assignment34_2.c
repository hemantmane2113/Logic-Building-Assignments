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

int SearchLastOcc(PNODE Head,int no)
{
    int iCounter = 1;
    int index = 1;

    while(Head != NULL)
    {   
        
        if(Head->Data == no)
        {   
            
            index = iCounter;
        }
        Head = Head->Next;
        iCounter++;
        
               
    }
    return index;
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int Search = 0;

    int iNum = 0;
    printf("Enter the number to find its last occurance: ");
    scanf("%d",&iNum);

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);
    iRet = Count(First);
    Search = SearchLastOcc(First,iNum);
    printf("\nThe Last occurance of number %d is at index %d",iNum,Search);


    return 0;
}

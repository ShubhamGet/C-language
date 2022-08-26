#include<stdio.h>
void push();
int pop();
void traverse();
int stack[5];
int top=-1;
int main()
{
    int ch;
    do
    {
        printf("\nEnter your choice");
        printf("\n1.Push ");
        printf("\n2.Pop ");
        printf("\n3.Traverse ");
        printf("\n4. Exit ");
        printf("\nEnter your choice ");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                printf("Enter item got delete %d",pop());
                break;
            case 3:
                traverse();
                break;
            default:printf("\nWrong choice ");
                break;
        }
    }
    while (ch!=5);
}
void push()
{
    int item;
    if(top==5)
    {
        printf("\nStack is overflow");
    }
    else
    {
        printf("\nEnter the item to be inserted ");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}
int pop()
{
    int item;
    if(top==-1)
    {
        printf("\nStack is underflow");
    }
    else
    {
        item=stack[top];
        top=top-1;
    }
    return(item);
}
void traverse()
{
    int i;
    for (i=top; i>=0; i--) {
        printf("%d ",stack[i]);
    }
}

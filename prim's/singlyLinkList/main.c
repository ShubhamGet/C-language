#include<stdio.h>
#include<stdlib.h>
int size_counter();
struct node
{
    int data;
    struct node *next;
}*start;

void insertBegin(int num)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    if(start==NULL)
    {
        start=temp;
        start->next=NULL;
    }
    else
    {
        temp->next=start;
        start=temp;
    }
}
int delete_start()
{
    struct node *temp;
    if(start==NULL)
        return 0;
    else
    {
        temp=start;
        start=start->next;
        printf("No deleted is %d",temp->data);
        return 1;
    }
}
void display(struct node *r)
{
    r=start;
    if(r==NULL)
    {
        return;
    }
    while(r!=NULL)
    {
        printf("%d ",r->data);
        r=r->next;
    }
    printf("\n");
}
int main()
{
    int ch,num,pos;
    struct node *n;
    start=NULL;
    printf("\nLinked List");
    do
    {
        printf("\nSelect Operation ");
        printf("\n 1.Insert at Beginning ");
        printf("\n 2.Delete from Beginning ");
        printf("\n 3.Dispaly");
        printf("\n 4.Exit");
        printf("\n Enter ur choice ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the number to insert ");
            scanf(" %d",&num);
            insertBegin(num);
            break;
            case 2:
            delete_start();
            break;
            case 3:
            if(start==NULL)
            {
                printf("List is Empty ");
            }
            else
            {
                printf("Element(s) in the list are ");
            }
            display(n);
            break;
            case 4:
            printf("End of program ");
      }
    }
    while(ch!=4);
}


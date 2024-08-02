#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct node
{
    int data;
    struct node*next;
}*newnode,*temp;
struct node*head=NULL;
struct node*tail=NULL:
void create()
{
    int value,n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("\nenter the values of the node:");
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&value);
        newnode->data=value;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
    }while(--n!=0)
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void count()
{
    temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("the count of %d\n",count);
}
void deletion beg()
{
    temp=head;
    head=head->next;
    temp->next=NULL;
}
void insertion beg()
{
    int value;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the value of node to insert:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
void insertion end()
{
    int value;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the value of node to insert:");
    scanf("%d",&value);
    newnode->data=value;
    tail->next=newnode;
    nwode->next=NULL;
    tail=newnode;   
}
void insertion pos()
{
    int value,pos,i;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the value and position to insert:");
    scanf("%d%d",&value,&pos);
    temp=head;
    for(i=1;i<pos-1;i++)
    {
        if(temp->next==NULL)
        {
            printf("there are less elements");
        }
        temp=temp->next;
    }
    newnode->data=value;
    newnode->next=temp->next;
    temp->next=newnode;
}
void deletion beg()
{
    temp=head;
    head=head->next;
    printf("the deleted element is %d",temp->data);
    temp->next=NULL;
    free(temp)
}
void deletion end()
{
    temp=head;
    while(temp->next!=tail)
    temp=temp->next;
    temp->next=NULL;
    tail=temp;
}
void deletion key()
{
    int i,key;
    printf("enter the key to delete:");
    scanf("%d",&key);
    temp=head;
    while(temp!=NULL)
    {
        if(temp->next->data==key)
        break;
        else
        temp=temp->next;
    }
    temp->next=temp->next->next;
}
void search()
{
    temp=head;
    int element;
    printf("\nenter the element to search:");
    scanf("%d",&element);
    while(temp!=NULL)
    {
        if(temp->data==element)
    {
        printf("\nelement found!\n");
        break;
    }
    temp=temp->next;
    }
if(temp==NULL)
{
    printf("\nelement not found.\n");
}
}
void reverse list()
{
    struct node*prevnode,*curnode;
    if(head!=NULL)
    {
        prevnode=head;
        curnode=head->next;
        head=head->next;
        prevnode->next=NULL;
        while(head!=NULL)
        {
            head=head->next;
            curnode->next=prevnode;
            prevnode=curnode;
            curnode=head;
        }
        head=prevnode;
    }
}
void remove duplicates()
{
    struct node*current=head,*index=NULL,*temp=NULL;
    if(head==NULL)
    {
        return;
    }
    while(head!=NULL)
    {
        head=head->next;
        curnode->next=prevnode;
        prevnode=curnode;
        curnode=head;
    }
    head=prevnode;
}
void sort()
{
    struct node *i,*j;
    int temp;
    if(head==NULL)
    {
        return;
    }
    else
    while(i!=NULL)
    {
        j=i->next;
        while(j!=NULL)
        {
            if(i->data>j->data)
            {
                temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
            j=j->next;
        }
        i=i->next;
    }
}
int main()
{
    char choice;
    while(1)
    {
        printf("\n(a)create list\n(b)display list names\n(c)add item at front\n(d)remove item at front\n(e)add item at rare\n(f)remove item at rare\n(g)add item at a given location\n(h)remove given item\n(i)search an item\n(j)remove duplicate items\n(k)count items\n(l)sort list\n(m)reverse list items");
        printf("\n");
        printf("enter your choice:");
        scanf("%c",&choice);
        switch(tolower(choice))
        {
            case 'a':create();
                     break;
            case 'b':printf("\ncreated elements are :");
                     display();
                     break;
            case 'c':insertion beg();
                     printf("list after inserting at beginning:");
                     display();
                     printf("\n");
                     break;
            case 'd':deletion beg();
                     printf("\nlist after deletion at beginning:");
                     display();
                     printf("\n");
                     break;
            case 'e':insertion end();
                     printf("\nlidt after insertion at ending:");
                     display();
                     printf("\n");
                     break;
            case 'f':deletion end();
                     printf("lisst after deletion at ending:");
                     display();
                     printf('\n');
                     break;
            case 'g':insertion pos();
                     printf("\n list after inserting at a position:");
                     display();
                     printf("\n");
                     break;
            case 'h':deletion key();
                     printf("\nlist after deleting a given item:");
                     display();
                     printf("\n");
                     break;
            case 'i':search();
                     break;
            case 'j':remove duplicates();
                     printf("\nlist after removing duplicates:");
                     display();
                     printf("\n");
                     break;
            case 'k':count();
                     break;
            case 'l':sort();
                     break;
            case 'm':reverse list();
                     printf("\nlist after reversing");
                     display();
                     printf("\n");
                     break;
            default:printf("enter correct choice");
                    exit(0);
        }
    }
}
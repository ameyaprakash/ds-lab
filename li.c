 #include<stdio.h>
 #include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
 struct node *head *newnode,*temp;
 head=NULL;
 {
   newnode=(struct node*)malloc(sizeof(struct node));
 }
   printf("enter the data");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   if(head==NULL)
    {
       head=newnode;
    }
     else
    temp->next=newnode;
    temp=newnode;
  }
 int main()
{
 node *head=NULL;
 node *second=NULL;
 node *third=NULL;
 head=newnode();
second=newnode();
head->data=1;
head->next=second;
second->data=2;
second->next=third;
}

 

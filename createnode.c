#include<stdio.h>
#include<conio.h>
struct node
{
 int data;
 struct node *link;
};
 struct node *newnode,*temp;
void creation()
{
 int da;
newnode=(struct node*)malloc(sizeof (struct node));
temp=(struct node*)malloc(sizeof (struct node));
printf("Enter number?");
scanf("%d",&da);
newnode->data=da;
temp=newnode;
newnode->link=NULL;
}
void display()
{
 printf("Result is \n");
 printf("%d\n",newnode->data);
 printf("%d\n",newnode->link);
 printf("%d\n",temp->data);
 printf("%d\n",temp->link);
}
void main()
{
 printf("start\n");
 creation();
 display();
}

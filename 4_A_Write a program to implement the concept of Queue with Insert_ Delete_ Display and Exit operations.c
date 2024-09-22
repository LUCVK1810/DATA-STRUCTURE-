#include<stdio.h>
#include<conio.h>
#define max 5
int rear=-1;
int front=-1;
void insert();
int deleteq();
void display();
int q[max];
void insert()
{
int val;
printf("Enter value to be inserted :");
scanf("%d",&val);
if(rear==max-1)
{
printf("Queue is full.");
}
else if(front==-1)
{
front=rear=0;
q[rear]=val;
printf("Value inserted successfully.");
}
else
{
q[++rear]=val;
printf("Value inserted successfully.");
}
 
}
int deleteq()
{
if(front==-1)
{
printf("Queue is already empty.");
return -1;
}
else if(front==rear) //Only one item is present.
{ int val ;
val=q[front];
 front=rear=-1;
printf("Value to be deletede : %d",val);
return val;
}
else
{
int val ;
val=q[front];
front++;
printf("Value to be deletede : %d",val);
return val;
}
}
void display()
{
if(front==-1)
{
printf("Queue is empty.");
}
else
{
int i;
printf("Queue is :");
for(i=front;i<=rear;i++)
{
printf(" %d ",q[i]);
}
}
}
int main()
{
int choice;
clrscr();
do
{
printf("\n **** Main Menu **** \n");
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.Display \n");
printf("4.Exit#include<stdio.h>
#include<conio.h>
#define max 5
int front = -1;
int rear = -1;
void insetr();
void display();
int deleteq();
int q[max];
void insert()
{
int val;
printf("Enter value :");
scanf("%d",&val);
if((rear+1)%max==front)
{
printf("Queue is full.");
}
else if(rear==-1)
{
rear=front=0;
q[rear]=val;
printf("Inserted successfully.");
}
Else
{
rear=(rear + 1)%max;
q[rear]=val;
printf("Inserted successfully.");
}
}
int deleteq()
{
int val;
if(front== -1)
{
printf("Queue is empty.");
return -1;
}
else if(front == rear)
{
int val=q[front];
front=rear= -1;
printf("Deleted value : %d",val);
return val;
}
else
{
val=q[front];
front=(front+1)%max;
printf("Deleted value : %d",val);
return val;
}
}
void display()
{
int i;
if(front ==-1)
{
printf("Queue is empty.");
}
else
{
printf("Queue is :");
for(i=front;i!=rear;i=(i+1)%max)
{
printf("%d",q[i]);
}
printf("%d",q[i]);
}
}
int main()
{ int choice;
clrscr();
do
{
printf("\n **** Main Menu **** \n");
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.Display \n");
printf("Enter your choice :");
scanf("%d",&choice);
printf("\n");
switch(choice)
{
case 1: insert();
break;
case 2 : deleteq();
break;
case 3 : display();
break;
case 4 : break;
}
}
while(choice!=4);
return 0;
}\n");
printf("Enter your choice :");
scanf("%d",&choice);
printf("\n");
switch(choice)
{
case 1: insert();
break;
case 2 : deleteq();
break;
case 3 : display();
break;
case 4 : break;
}
}
while(choice!=4);
return 0;
}
#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5
int front=-1, rear=-1,choice;
int q[10];
void del();
void display();
void ins();
int main()
{
while(1)
{
printf("\n1-->insert\n");
printf("2-->delete\n");
printf("3-->display\n");
printf("4-->exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
ins();
break;
case 2:
del();
break;
case 3:
display();
break;
case 4:
return 0;
break;
}
getch();
}
}
void ins()
{
int num;
if(rear==(MAXSIZE-1))
printf("queue is full\n");
else{
printf("enter no\n");
scanf("%d",&num);
rear=rear+1; q[rear]=num;
if(front==-1)
front++;
}
}
void del()
{
if(front==-1)
printf("queue empty\n");
else
{
printf("deleted item=%d",q[front]);
if(front==rear)
front=rear=-1;
else
front++;
}
}
void display()
{
int i;
if(front==-1)
printf("queue empty\n");
else
{
printf("\nThe status of the queue\n");
for(i=front;i<=rear;i++)
printf("%d\n",q[i]);
}}
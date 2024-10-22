#include<stdio.h>
#include<stdlib.h>
#define max 50
int queue[max],front=-1,rear=-1;
void enqueue()
{
int elem;
if(rear==max-1)
{
printf("Queue overflow/");
return 0;
}
printf("Enter the elements to be enqueued:");
scanf("%d",& elem);
if(frpnt==-1)
front=0;
}
rear++;
queue[rear]=elem;
printf("%d enqueued to the queue/n",elem);
}
void dequeue()
{
if(front==-1// front=rear)
{
printf('Queue underflow"/");
return;
}
printf("dequeued element:%d/n",queue[front]);
front++;
if(front>rear)
{
front=rear=-1;
}
}
void display()
{
int i;
if(front==-1)
{
printf("queue is empty/n");
return;
}
printf("Queue elements are:/n");
for[i=front;1<=rear;i++);
{
printf("%d",Queue[1]);
}
print("/n");
}
print("/n");
}
int main()
{
int ch;
while(1)
{
print("/n queue menu/n');
printf("1.enqueue/n");
printf("2.dequeue/n");
printf("3.display/n"");
printf("4.exit/n");
printf("Enter ypur choice:);
scanf("%d",&ch));
switch(ch)
{
case 1:enueueue();
break;
case 2:dequeue();
break;
case 3:display ();
break;
case 4:exit(0);
default :printf("Invalid choice;try again/n");
}
}
return 0;
}


//Implement Queue operations (Insert, delete, display front & rear values)- 04/10/23
#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void delete();
void display();
int queue_array[MAX];
int rear = -1;
int front = -1;
int main()
{
int choice;
while (1)
{
printf("Menu:\n");
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("Wrong choice \n");
}
}
}
void insert()
{
int item;
if(rear == MAX -1)
printf("Queue Overflow \n");
else
{
if(front == -1)
front = 0;
printf("insert the element :");
scanf("%d", &item);
rear = rear + 1;
queue_array[rear] = item;
}
}
void delete()
{
if(front == -1 || front > rear)
{
printf("Queue Underflow \n");
return;
}
else
{
printf("deleteted element : %d \n", queue_array[front]);
front = front + 1;
}
}
void display()
{
int i;
if(front == -1)
printf("Queue is empty \n");
else
{
printf("Queue is :\n");
for(i = front; i <= rear; i++)
{
printf("");
printf("%d", queue_array[i]);
printf("\n front element ids %d",queue_array[front]);
printf("\n rear element ids %d",queue_array[rear]);
printf("\n");
}
}
}

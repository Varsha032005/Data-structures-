Bus fees pathi edhavadhu therinjidha d
Ilayee
Hm kk
Oii
Git hub Full ah evolo finish pannanum
Oru 29 kita varum d
Mmm
#include <stdio.h>
void swap(int* arr,int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
void bubbleSort(int arr[],int n)
{
	int i,j;
	for (i=0;i<n-1;i++)
	for (j=0;j<n-i-1;j++)
	if (arr[j]>arr[j+1])
	swap(arr,j,j+1);
}
void printArray(int arr[],int size)
{
	int i;
	for (i=0;i<size;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
int main()
{
	int arr[]={86,8,3,21,73,9,6};
	int N=sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,N);
	printf("sorted array: ");
	printArray(arr,N);
	return 0;
}
QUEUE ARRAY ANNUPU
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void enQueue(int);
void deQueue();
void display();
int queue[SIZE], front = -1, rear = -1;
int main()
{
   int value, choice;
   while(1){
      printf("\n\n*** MENU ***\n");
      printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 enQueue(value);
		 break;
	 case 2: deQueue();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}
void enQueue(int value){
   if(rear == SIZE-1)
      printf("\nQueue is Full!!! Insertion is not possible!!!");
   else{
      if(front == -1)
	 front = 0;
      rear++;
      queue[rear] = value;
      printf("\nInsertion success!!!");
   }
}
void deQueue(){
   if(front == rear)
      printf("\nQueue is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", queue[front]);
      front++;
      if(front == rear)
	 front = rear = -1;
   }
}
void display(){
   if(rear == -1)
      printf("\nQueue is Empty!!!");
   else{
      int i;
      printf("\nQueue elements are:\n");
      for(i=front; i<=rear; i++)
	  printf("%d\t",queue[i]);
   }
}

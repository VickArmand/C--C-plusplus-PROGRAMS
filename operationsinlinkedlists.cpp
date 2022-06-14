#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
int data;
struct node * next;	
};
int main()
{
/*Creating a node in a linked list */	
struct node *head =(struct node *)malloc(sizeof(struct node)); 
head->data=45;

/*Inserting elements in a linked list */	
struct node * current =(struct node *)malloc(sizeof(struct node));
current->data=100;
head->next=current;
cout<<head<<endl;
cout<<current<<endl;
}
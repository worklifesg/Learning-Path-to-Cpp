// Program to illustrate pointers for linked list


#include <iostream> 
using namespace std; 
//Struct called node, for linked list
struct Node
{
    int data;
    Node *link;
};
//typedef can be used to rename items,
//used here to rename a node* to just nodePtr
typedef Node* nodePtr;

//Function prototype
void insert(nodePtr& head, int data);


int main()
{
	//create the first node in a list
   nodePtr head;
   head = new Node;
 	head->data = 20;
 	head->link = NULL;

 	//Call to insert a new node with 30 as the data point
 	insert (head, 30);
 	
	 //Print the list
	nodePtr tmp;
 	tmp = head;
 	//while i'm not at the end of the list, print
 	while(tmp != NULL)
	{
		cout << tmp->data << endl;
		tmp = tmp->link;
	}
  return 0;
 }
///////////////////////////////////////////////////
//Function to create a new node, and add it to the front
//  of the list
///////////////////////////////////////////////////
void insert(nodePtr& head, int data)
{
   nodePtr tempPtr;
   tempPtr = new Node;
   tempPtr->data = data;
   tempPtr->link = head;
   head = tempPtr;
}

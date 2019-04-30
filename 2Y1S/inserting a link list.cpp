#include <iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;

Node* Insert(Node *head,int data)
{
    // Creates a temp to hold the last node and set last's data and next
    Node *last = new Node;

    last->data = data;
    last->next = NULL;

    // If the linked list is empty then set head = last
    if (head == NULL) {
        head = last;
    } else {
        // Creates a temp node and sets it to head
        Node *temp = new Node;

        temp = head;

        // Uses temp to find the last node
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Appends the last node with last
        temp->next = last;
    }

    // Returns head of linked list
    return head;
}
int mai()
{
    node ptc[3];
	node* head=new node;
	int val=2;
	for(int i=0; i<3;i++){
		ptc[i].val=i;
	}
	Node* Insert(Node *head,i);
}

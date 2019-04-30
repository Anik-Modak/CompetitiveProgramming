#include<bits/stdc++.h>
using namespace std;

struct node
{
    int num;
	node *next;
};
node *root=NULL;

void append(int num)
{
	if(root==NULL) //If the list is empty
	{
		root=new node();
		root->num=num;
		root->next=NULL;
	}
	else{
		node *current_node=root; //make a copy of root node
		while(current_node->next!=NULL) //Find the last node
		{
		    cout<<current_node<<endl;
			current_node=current_node->next; //go to next address
		}
		node *newnode = new node(); //create a new node
		newnode->num=num;
		newnode->next=NULL;
		current_node->next=newnode; //link the last node with new node
	}
}
void print()
{
    node *current_node=root;
    while(current_node!=NULL) //loop until you reach null
    {
        printf("%d\n",current_node->num);
        current_node=current_node->next;
    }
}
void delete_node(int num)
{
	node *current_node=root;
	node *previous_node=NULL;
	while(current_node->num!=num) //Searching node
	{
		previous_node=current_node; //Save the previous node
		current_node=current_node->next;
	}
	if(current_node==root) //Delete root
	{
		node *temp=root; //save root in temporary variable
		root=root->next; //move root forward
		delete(temp); //free memory
	}
	else //delete non-root node
	{
		previous_node->next=current_node->next; //previous node points the current node's next node
		delete(current_node); //free current node
	}
}
int main(){

    int i,n,a;
    cin>>n;
    for(i=1; i<=n; i++)
    {
       // cin>>a;
        append(i);
    }
	print();
	delete_node(3);
	print();
    return 0;
}

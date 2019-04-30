#include <iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;

struct node{
	int val;
	node* next;
};
void remove(int val, node* some)
{
	node* curr;
	curr=some;
	for(int i=0;i<3;i++)
    {
		curr=curr->next;
		if(i==val) delete curr;
	}
}

int main(){

	node ptc[3];
	node* head=new node;
	int val=2;
	for(int i=0; i<3;i++){
		ptc[i].val=i;
	}
	remove(val, head);
	for(int i=0; i<3;i++)
		cout<<ptc[i].val<<endl;
	return 0;
}

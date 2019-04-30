#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

void insert(node *s,int data)
{
    while(s->next!=NULL){
        s=s->next;
    }
    s->next = new node();
    s->next->data=data;
    s->next->next=NULL;
}
void print(node *s)
{
    node *cur_node=s->next;
    while(cur_node!=NULL){
        cout<<cur_node->data<<endl;
        cur_node=cur_node->next;
    }
}
int main()
{
   // cout<<sizeof(node)<<endl;
    int n,a;
    node *head=new node();
    cin>>n;
    while(n--){
        cin>>a;
        insert(head,a);
    }
    print(head);
}

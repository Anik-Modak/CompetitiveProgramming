//Anik_Modak
#include<bits/stdc++.h>
#define siz 1000
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

Node* newNode(int key)
{
	Node* node = new Node;
	node->data = key;
	node->left = node->right = nullptr;

	return node;
}

long long cnt  = 0;
void insert(Node* root, int key)
{
	cnt++;
	if (key < root->data)
    {
        if(root->left==NULL)
        {
            root->left = newNode(key);
            return;
        }
        else insert(root->left, key);
    }
	else
    {
        if(root->right==NULL)
        {
            root->right = newNode(key);
            return;
        }
        else insert(root->right, key);
    }
}

int main()
{
    int data, n;
    scanf("%d",&n);

    Node *root = new Node();
    while(n--)
    {
        scanf("%d",&data);
        insert(root,data);
        printf("%lld\n",--cnt);
    }
    return 0;
}

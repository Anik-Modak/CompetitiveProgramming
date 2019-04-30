class Node{

public:

    Node * left;
    Node * right;
    int val;

    Node(int v){
        left = NULL;
        right = NULL;
        val = v;
    }
};

bool isIsomorphic(Node* n1, Node *n2)
{
     if (n1 == NULL && n2 == NULL) return true;
     if (n1 == NULL || n2 == NULL) return false;
     if (n1->val != n2->val) return false;
     return
     (isIsomorphic(n1->left,n2->left) && isIsomorphic(n1->right,n2->right))||
     (isIsomorphic(n1->left,n2->right) && isIsomorphic(n1->right,n2->left));
}
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;

    }
}

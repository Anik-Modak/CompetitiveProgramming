//Anik_Modak
#include<bits/stdc++.h>
#define siz 1000
using namespace std;

int info[siz]={0};

void insert(int data)
{
    int loc=1;
    while(1){
        if(info[loc]==0){
            info[loc]=data;
            break;
        }
        else if(data<=info[loc]) loc=loc*2;
        else loc=loc*2+1;
    }
}
void preorder(int loc)
{
    if(info[loc]== 0) return;
    printf("%d ",info[loc]);
	preorder(loc*2);
	preorder(loc*2+1);
}
void postorder(int loc)
{
    if(info[loc]== 0) return;
	postorder(loc*2);
	postorder(loc*2+1);
	printf("%d ",info[loc]);
}
void inorder(int loc)
{
    if(info[loc]== 0) return;
	inorder(loc*2);
	printf("%d ",info[loc]);
	inorder(loc*2+1);
}
int main()
{
    int data,n,len;
    printf("Enter the number of data: "); cin>>n;
    //90 60 50 95 65 48 98 100 25
    len=pow(n,2);
    while(n--){
        cin>>data;
        insert(data);
    }
    for(int i=1; i<len; i++) cout<<i<<" "<<info[i]<<endl;

    cout<<"preorder : "; preorder(1);
    cout<<endl;
    cout<<"inorder : "; inorder(1);
    cout<<endl;
    cout<<"postorder : "; postorder(1);
    cout<<endl;
}



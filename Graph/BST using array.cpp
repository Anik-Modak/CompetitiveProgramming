//Anik_Modak
#include<bits/stdc++.h>
#define siz 1000
using namespace std;

int info[siz]={0};

void insertElement(int data)
{
    int loc=1;
    while(1){
        if(info[loc]==0){
            info[loc]=data;
            break;
        }
        else if(info[loc]>=data) loc=loc*2;
        else loc=loc*2+1;
    }
}

void insert(int data)
{
    int loc=1;
    while(1){
        if(info[loc]==0){
            info[loc]=data;
            break;
        }
        else if(data<info[loc]) loc=loc*2;
        else if(data>info[loc]) loc=loc*2+1;
        else{
            cout<<"This element is already insert in position: "<<loc<<endl;
            break;
        }
    }
    //cout<<info[loc]<<endl;
}

int main()
{
    int data,n,len,element;
    printf("Enter the number of data: "); cin>>n;
    //90 60 50 95 65 48 98 100 25
    len=pow(2,n)-1;
    while(n--){
        cin>>data;
        insertElement(data);
    }
    printf("Enter an element which you insert: "), cin>>element;
    insert(element);

    for(int i=1; i<=len; i++) cout<<i<<" "<<info[i]<<endl;
}


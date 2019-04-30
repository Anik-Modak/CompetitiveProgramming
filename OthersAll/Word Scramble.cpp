#include<bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    int i;
    while(getline(cin,word)){
        for(i=0;i<word.size();i++){
            if(word[i]==' ') cout<<" ";
            else break;
        }
        stringstream s(word);
        while(s>>word)
        {
            reverse(word.begin(),word.end());
            cout<<word;
            if(s<<word) cout<<" ";
        }
        cout<<endl;
    }
}

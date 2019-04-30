#include<iostream>
#include<cstdio>
#include<cstring>
#include "list.cpp"
#include "add.cpp"
#include "delet.cpp"
#include "file.cpp"
#include "io.cpp"
#include "constant.cpp"
#define P(XX) std::cout<<XX<<"\n";

int main(){

    std::string str;
    int item,i,j,k,n,tmp;
    bool chk;
    item = file();
    while(true){

        main1();
        chk=1;
        getline(std::cin,str);
        if(str==add1){
            chk = task.add(item);
            item++;
        }
        else if(str==delet1){
            ent();
            tmp = inp(item);
            if(tmp==0)
                continue;
            chk = task.delet(tmp,item);
            item--;
        }
        else if(str==show1){
            ent();
            tmp = inp(item);
            if(tmp==0)
                continue;
            chk = task.show(tmp);
        }
        else if(str==exit1){
            chk = task.exit(item);
            return 0;
        }
        else if(str==showall){
            show_all(item);
            chk=0;
        }
        else if(str==clr){
            //system("CLS");
        }

        if(chk){
            error();
            menu();
        }
    }
    return 0;
}

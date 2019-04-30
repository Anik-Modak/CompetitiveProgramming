#include<fstream>

int file(){

    std::ifstream input("data.txt",std::ios::in|std::ios::binary);
    if(!input){
        std::cout<<"To do is empty\n";
        return 1;
    }
    int i=0;
    while(input){

        input>>task_list[++i].task_name;
        if(task_list[i].task_name.size()==0){
            i--;
            break;
        }
        input>>task_list[i].dd>>task_list[i].mm>>task_list[i].yy;
    }
    input.close();
    return i;
}

bool list::exit(int item){

    std::ofstream output("data.txt",std::ios::out|std::ios::binary);
    if(!output){
        std::cout<<"Error occred\n";
        return 1;
    }
    for(int i=1;i<=item;i++){
        output<<task_list[i].task_name<<"\n\n";
        output<<task_list[i].dd<<" "<<task_list[i].mm<<" "<<task_list[i].yy<<"\n\n";
    }
    output.close();
    return 0;
}

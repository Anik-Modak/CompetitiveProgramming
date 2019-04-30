#include<fstream>

int file(){

    std::ifstream input("file.txt",std::ios::in|std::ios::binary);
    if(!input){
        std::cout<<"To do is empty\n";
        return 1;
    }
    int i=0;
    while(input){

        input>>data_list[++i].data_name;
        if(data_list[i].data_name.size()==0){
            i--;
            break;
        }
        input>>data_list[i].dd>>data_list[i].mm>>data_list[i].yy;
    }
    input.close();
    return i;
}


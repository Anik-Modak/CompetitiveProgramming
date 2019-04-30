#include "show.cpp"

void main1(){
    std::cout<<"Enter Command : ";
}

void ent(){
    std::cout<<"Enter the task number : ";
}

void error(){
    std::cout<<"Something is wrong!\n";
}

int inp(int item){
    int no;
    std::cin>>no;
    getchar();
    if(no>item){
        std::cout<<"This task is not exist\n";
        return 0;
    }
    return no;
}

void menu(){
    std::cout<<"Please enter any of these command : \n";
    std::cout<<"    - 'add' to add any file to to-do-list\n";
    std::cout<<"    - 'show' to show any file from to-do-list\n";
    std::cout<<"    - 'delete' to delete any file from to-do-list\n";
    std::cout<<"    - 'all' to show all file from to-do-list\n";
}

void show_all(int item){

    int i,n;
    for(i=1;i<=item;i++){
        n = task.show(i);
    }
}

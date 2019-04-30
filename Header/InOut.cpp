
int input(int item){

    int n;
    std::cout<<"\nEnter data no: ";
    std::cin>>n;

    if(n>item){
        std::cout<<"\tThis data is not exist\n";
        return 0;
    }
    return n;
}

void show_all(int item){

    for(int i=1;i<=item;i++){
        data.Show(i);
    }
}


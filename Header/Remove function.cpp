
void list::Remove(int data_no,int item){

    int i;
    for(i=1;i<=item;i++){
        if(i>=data_no) data_list[i] = data_list[i+1];
    }
    return ;
}


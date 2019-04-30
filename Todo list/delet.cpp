bool list::delet(int task_no,int item){
    int i;
    for(i=1;i<=item;i++){
        if(i>=task_no){
            task_list[i] = task_list[i+1];
        }
    }
    return 0;
}

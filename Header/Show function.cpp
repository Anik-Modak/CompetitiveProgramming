
void list::Show(int data_no){

    std::cout<<"\n\tData serial : "<<data_no<<"\n";
    std::cout<<"\tData Name : "<<data_list[data_no].data_name<<"\n";
    std::cout<<"\tDay : "<<data_list[data_no].dd<<"\n\tMonth : "<<data_list[data_no].mm<<"\n\tYear : "<<data_list[data_no].yy<<"\n\n";
    return ;
}

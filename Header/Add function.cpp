
void list::add(int item)
{
    std::cout<<"\nEner data Name : ";
    std::cin>>data_list[++item].data_name;
    getchar();

    std::cout<<"Enter date according to dd//mm//yy format : ";
    std::cin>>data_list[item].dd>>data_list[item].mm>>data_list[item].yy;
    getchar();
    return ;
}


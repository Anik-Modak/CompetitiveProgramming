
int menu(){

    int choice;
    std::cout << "\n\t The Menu\n";
    std::cout<<"  [1] - to show any file from to-do-list\n";
    std::cout<<"  [2] - to add any file to to-do-list\n";
    std::cout<<"  [3] - to remove any file from to-do-list\n";
    std::cout<<"  [4] - to show all file from to-do-list\n";
    std::cout<<"  [5] - to Exit the program.\n";
    std::cout<<"Please enter any of these command : ";
    std::cin>>choice;
    return choice;
}

#include<iostream>
#include<cstdio>
#include<cstring>
#include "Todo class list.cpp"
#include "Show function.cpp"
#include "Add function.cpp"
#include "Remove function.cpp"
#include "All file for todo list.cpp"
#include "Menu function.cpp"
#include "Inout.cpp"

int main(){

    int item,temp;
    item = file();

    bool working = true;
    std::cout << " Welcome to To-Do list program!\n\n";
    do {
        int choice = menu();
        switch(choice) {

            case 1:
                temp = input(item);
                if(temp==0) continue;
                data.Show(temp);
                break;

            case 2:
                data.add(item);
                item++;
                break;

            case 3:
                temp = input(item);
                if(temp==0) continue;
                data.Remove(temp,item);
                item--;
                break;

            case 4:
                show_all(item);
                break;

            case 5:
                std::cout << "thank you\n";
                working = false;
                break;

            default:
                std::cout << "Input was invaild Try again or Enter 4 to exit.\n";
        }
    } while (working == true);
    return 0;
}


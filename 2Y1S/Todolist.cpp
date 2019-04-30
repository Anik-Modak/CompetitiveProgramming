#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector<string> pullFile(string fileName);
void pushFile(vector<string> totalList, string fileName);
bool ifExists(string fileName);
void printList(vector<string> totalList, string fileName);

int main(){
    string trash;
    cout << "04\\04\\18"<<endl;;
    string fileName;
    vector<string> totalList;
    vector<string> names;

    if (ifExists("lists.txt")){
        names = pullFile("lists.txt");
    }
    cout<<"File List: \n";
    if(names.size() <= 1){
        cout<<"No lists found.\n";
    }
    else{
        for(int c = 0; c < names.size(); c++){
            cout<<(c+1)<<". "<<names[c]<<"\n";
        }
    }
    bool flag = true;
    while (flag){
        cout<<"\nEnter the number of the list you would like to load or Enter file name for a new list.\n >";
        cin>>fileName, cout<<"\n";

        if(isdigit(fileName[0])){
            int x = fileName[0] - '0';
            if(x > 0 && x < names.size()){
                fileName = names[x-1];
                flag = false;
            }
            else{
                cout<<"Not a list number.\n";
            }
        }
        else{
            fileName = fileName + ".txt";
            names.push_back(fileName);
            flag = false;
        }
    }
    pushFile(names, "lists.txt");

    if (ifExists(fileName)){
        totalList = pullFile(fileName);
    }
    bool cont = true;
    while (cont){
        printList(totalList, fileName);
        int choice = 0;
        cout<<"What would you like to do?\n";
        cout<<"1. Add item.\n";
        cout<<"2. Remove item.\n";
        cout<<"3. Quit.\n";
        cout<<">", cin>>choice, cout<<"\n";
        while(cin.fail()){
            cin.ignore();
            cin.clear();
            rewind(stdin);
            cout<<">", cin>>choice, cout<<"\n";
        }
        if(choice == 1){
            string newItem;
            cout<<"Enter new item: ", cin>>newItem, cout<<"\n";
            if(cin.fail()){
                cin.ignore();
                cin.clear();
                rewind(stdin);
                cout<<"Enter new item: ", cin>>newItem, cout<<"\n";
            }
            totalList.push_back(newItem);
        }
        else if(choice == 2){
            int itemNumber = 0;
            cout<<"Enter item number to delete: ", cin>>itemNumber, cout<<"\n";
            while(cin.fail() || itemNumber < 1 || itemNumber > totalList.size()){
                cin.ignore();
                cin.clear();
                rewind(stdin);
                cout<<"Enter item number to delete: ", cin>>itemNumber, cout<<"\n";
            }
            totalList.erase(totalList.begin() + (itemNumber-1));
        }
        else if(choice == 3){
            cont = false;
            pushFile(totalList, fileName);
            cout<<"Exiting.\n";
        }
        else{
            cout<<"Invalid Input!\n";
            cin.clear();
            cin.ignore();
        }
    }
}

vector<string> pullFile(string fileName){
    vector<string> totalList;
    fstream ioFile;
    ioFile.open(fileName.c_str(), fstream::in);
    string bullet;

    while (!ioFile.eof()){
        getline(ioFile, bullet);
        if(!bullet.empty()){
            totalList.push_back(bullet);
        }
    }

    ioFile.close();
    return totalList;
}

void pushFile(vector<string> totalList, string fileName){
    fstream ioFile;
    ioFile.open(fileName.c_str(), fstream::out);

    for(int c = 0; c < totalList.size(); c++){
        if(!totalList[c].empty()){
            ioFile<<totalList[c]<<"\n";
        }
    }

    ioFile.close();
}

bool ifExists(string fileName){
    ifstream infile(fileName.c_str());
    return infile.good();
}

void printList(vector<string> totalList, string fileName){
    cout << "04\\04\\18";
    cout<<"List: "<<fileName<<"...\n";
    for(int c = 0; c < totalList.size(); c++){
            cout<<(c+1)<<". "<<totalList[c]<<"\n";
        }
    cout<<"\n\n";
}

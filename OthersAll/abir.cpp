#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int a[10000];

bool check(int n){ // Function Overloading
    if(n<18) return 0;
    else return 1;
}
bool check(char c[20]){// Function overloading
}
class start_end
{
    public:
    start_end()  // Print at Program's start
    {
       cout<<"Information for voter"<<endl;
    }
    ~start_end()  // Show message at end of program
    {
        cout<<"Program will terminate now"<<endl;
    }
};
class voter{
public:
    static int Number_of_voter; // Static member
    friend void person_number(voter a);  //Declaration Friend function
};
int voter:: Number_of_voter; // Declaration of static membe

class information:public voter{ // it inherits voter class
    int indx;
    char name[20];
    int age;
public:
    friend void person_number(voter a); //Declaration Friend function
    void Age(int i){
         cout<<"Enter age: ";
         cin>>age;
         a[i]=check(age);
    }
    void showAge() {
        cout<<"Age: "<<age<<endl;
    }// name() take name
    void Name(){
       cout<<"Enter Name: ";
       getchar();
       gets(name);
    }
    void showName(){
         cout<<"Name: "<<name<<endl;
    }
};
int main()
{
    start_end obj;
    int i,n;
    cout<<"Enter number of person: ";
    cin>>n;
    information vt[n]; //array object passing

    for(i=1;i<=n;i++)
    {
        vt[i].Number_of_voter=i;
        vt[i].Name();
        vt[i].Age(i);
    }
    int cnt=0;
    for(i=1;i<=n;i++)
    {
        if(check(i)) cout<<i<<" number person is selected for voter"<<endl;
        else cout<<i<<" number person cant not Voter"<<endl;
    }
    cout<<"Total person "<<n<<" Total voter "<<cnt<<endl;
    return 0;
}


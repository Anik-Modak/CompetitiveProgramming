#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int a[10000],b[10000];

bool check(int n) // Function Overloading of int parameter
{
    if(n<18) return 0;
    else return 1;
}
bool check(char c[20])// Function overloading of char array parameter
{
    if(strcmp(c,"Bangladeshi")==0) return 1;
    else return 0;
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
int voter:: Number_of_voter; // Declaration of static member

void person_number(voter a)//Defination Friend function
{
    cout<<"Number of person "<<a.Number_of_voter<<endl;
}

class information:public voter{ // it inherits voter class
    int i;
    char name[20];
    int age;
    char nationality[20];
public:
    friend void person_number(voter a); //Declaration Friend function
    void Age(int i){
         cout<<"Enter age: ";
         cin>>age;
         this->i=i; //this pointer
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
    void Nationality(){
        cout<<"Enter Nationality: ";
        getchar();
        gets(nationality);
        b[i]=check(nationality);
    }
    void showNationality(){
        cout<<"Nationality: "<<nationality<<endl;
    };
};
inline bool select_voter(int i) //Defination inline funcation
{
    if(a[i]==1&&b[i]==1) return 1;
    else return 0;
}
int main()
{
    start_end obj;
    int i,n;
    cout<<"Enter number of person: ";
    cin>>n;
    information vt[n]; //array object

    for(i=1;i<=n;i++)
    {
        vt[i].Number_of_voter=i;
        person_number(vt[i]);//array object passing
        vt[i].Name();
        vt[i].Age(i);
        vt[i].Nationality();
    }
    int cnt=0;
    for(i=1;i<=n;i++)
    {
        if(select_voter(i)){
            cout<<i<<" th person is selected for voter"<<endl;
            vt[i].showName();
            vt[i].showAge();
            vt[i].showNationality();
            cnt++;
        }
        else cout<<i<<" th person cant not Voter"<<endl;
    }
    cout<<"Total person "<<n<<" Total voter "<<cnt<<endl;
    return 0;
}

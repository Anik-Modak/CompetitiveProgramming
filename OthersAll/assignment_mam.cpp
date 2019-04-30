#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int abs(int n){// Function Overloading for absolute value of
    return n<0? -n:n;
}
double abs(double n){// Function overloading parameter one double
    return n<0.0? -n:n;
}

class person{ //it will inherit class;
    public:
        static int Number_of_person; // Static member
        char nam[100]; //name variable string
        int a;  // a=variable of age
        int h;  // h=variable of height
        int w;  // w=variable of weight

        // age() function take age
        void age(){ cout<<"Enter age: "; cin>>a; }

        void showAge() { cout<<"Age: "<<a<<endl; }

        // name() take name
        void name() { gets(nam); cout<<"Enter Name: "; gets(nam);}

        void showName() { cout<<"Name: "<<nam<<endl; }

        // height() take height
        void height() { cout<<"Enter Height: "; cin>>h; }

        void showHight() { cout<<"Height: "<<h<<endl; }

        //it take weight
        void weight() { cout<<"Enter Weight: "; cin>>w; }

        void showWeight() { cout<<"Weight: "<<w<<endl; }

        friend fr();    //Friend function

};
// Declaration of static member
int person:: Number_of_person;

class teacher: public person{ // it inherits person class
    public:
        void profession() { cout<<"Profession: Teacher"<<endl; }

        void work(){ cout<<"Work: Teach"<<endl; }
};


// it inherits person class
class programmer: public person
{
    public:
        void profession() { cout<<"Profession: Programmer"<<endl; }

        void work(){ cout<<"Work: Programming"<<endl; }
};


// it inherits person class
class student: public person
{
    public:
        void profession() { cout<<"Profession: Student"<<endl; }

        void work(){ cout<<"Work: Study"<<endl; }
};


// use of constructor destructor
class constructorDestructor
{
    public:
    constructorDestructor()  // Print at Program's start
    {
        cout<<"Program strat...."<<endl;
        cout<<"In this program you can save & see:"<<endl;
        cout<<"     1.Teacher's Data"<<endl;
        cout<<"     2.Programmer's Data"<<endl;
        cout<<"     3.Student's Data"<<endl;
    }

    ~constructorDestructor()  // Show message at end of program
    {
        cout<<"Program will terminate now"<<endl;
    }
};

//main function
int main()
{
    //nT=number of Teacher nP=number of programmer
    int nT,nP,nS,i,j; // nS=number of Student
    constructorDestructor c; // creating object for showing message



    cout<<"Enter the number of Teacher: ";
    cin>>nT;

    teacher t[nT]; // Array of object

    for(i=1;i<=nT;i++)
    {
        cout<<"Enter Information about Teacher "<<i<<":"<<endl;
         t[i].Number_of_person=i;
         t[i].name();
         t[i].age();
         t[i].height();
         t[i].weight();
    }

    cout<<"Enter the number of Programmer: ";
    cin>>nP;

    programmer p[nP]; //Array of object
    for(i=1;i<=nP;i++)
    {
        cout<<"Enter Information about Programmer "<<i<<":"<<endl;
         p[i].Number_of_person=nT+i;
         p[i].name();
         p[i].age();
         p[i].height();
         p[i].weight();
    }

    cout<<"Enter the number of Student: ";
    cin>>nS;

    student s[nS]; //

    for(i=1;i<=nS;i++)
    {
        cout<<"Enter Information about Student "<<i<<":"<<endl;
         s[i].Number_of_person=nT+nP+i;
         s[i].name();
         s[i].age();
         s[i].height();
         s[i].weight();
    }



    // it show you information
    for(;;)
    {
        cout<<"Enter Serial Number of Teacher 1 to "<<nT<<"(If want to skip press 0): ";
        int n;
        cin>>n;
        if(n==0) break;
        else
        {
            t[n].showName();
            t[n].showAge();
            t[n].showHight();
            t[n].showWeight();
            t[n].profession();
            t[n].work();
        }

    }



    for(;;)
    {
        cout<<"Enter Serial Number of Programmer 1 to "<<nP<<"(If want to skip press 0): ";
        int n;
        cin>>n;
        if(n==0) break;

        else
        {
            p[n].showName();
            p[n].showAge();
            p[n].showHight();
            p[n].showWeight();
            p[n].profession();
            p[n].work();
        }

    }


    for(;;)
    {
        cout<<"Enter Serial Number of Student 1 to "<<nT<<"(If want to skip press 0): ";
        int n;
        cin>>n;
        if(n==0) break;

        else
        {
            s[n].showName();
            s[n].showAge();
            s[n].showHight();
            s[n].showWeight();
            s[n].profession();
            s[n].work();
        }

    }

    cout<<"Total Number of Person: "<<s[nS].Number_of_person<<endl;

return 0;
}

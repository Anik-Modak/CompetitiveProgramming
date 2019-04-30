#include<bits/stdc++.h>
using namespace std;
class building{
    int r;
    int f;
    int a;
public:
    void set_rooms(int n);
    int get_rooms();
    void set_floors(int n);
    int get_floors();
    void set_area(int n);
    int get_area();
};
class house: public building{
    int br;
    int tr;
public:
    void set_bedrooms(int n);
    int get_bedrooms();
    void set_bathrooms(int n);
    int get_bathrooms();
};
class school: public building{
    int cr;
    int o;
public:
    void set_classrooms(int n);
    int get_classrooms();
    void set_office(int n);
    int get_office();
};
void building::set_rooms(int n){
    r=n;
}
int building::get_rooms(){
    return r;
}
void building:: set_floors(int n){
    f=n;
}
int building:: get_floors(){
    return f;
}
void building::set_area(int n){
    a=n;
}
int building:: get_area(){
    return a;
}
void house:: set_bedrooms(int n){
    br=n;
}
int house:: get_bedrooms(){
    return br;
}
void house:: set_bathrooms(int n){
    tr=n;
}
int house:: get_bathrooms(){
    return tr;
}

void school:: set_classrooms(int n){
    cr=n;
}
int school:: get_classrooms(){
    return cr;
}
void school:: set_office(int n){
    o=n;
}
int school:: get_office(){
    return o;
}
int main()
{
    house h;
    school s;
    h.set_rooms(15);
    h.set_floors(3);
    h.set_area(4500);
    printf("Building Has %d rooms\n",h.get_rooms());
    cout<<"Building Has "<<h.get_floors()<<" floors"<<endl;
}

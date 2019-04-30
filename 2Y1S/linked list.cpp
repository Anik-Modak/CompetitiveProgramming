//#include <stdafx.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    node *prev, *next;
}*q, *temp, *start=NULL;

int c1, c2 ;
void create();
void display();
void insert();
void del();

int main()
{
    system("cls");
    while(1)
    {
        system("cls");
        cout << " \t\t ******* MAIN MENU ******\n" ;
        cout << " press 1 for adding data \n" ;
        cout << " press 2 for displaying data \n " ;
        cout << " press 3 for insertion \n " ;
        cout << " press 4 for deletion \n " ;
        cout << " press 0 for exit\n " ;
        char ch;
        ch=getch();
        switch(ch)
        {
        case '1':
            system("cls");
            create();
            break;
        case '2':
            system("cls");
            display();
            getch();
            break;
        case '3':
            system("cls");
            insert();
            break;
        case '4':
            system("cls");
            del();
            break;

        case '0':
            exit(1);
        }
    }
}
void create()
{
    temp = new node;
    temp -> next = NULL;
    cout << "\nEnter data\n " ;
    cin >> temp -> data ;
    if(start == NULL)
    {
        start = temp;
        temp -> prev = NULL;
    }
    else
    {
        q= start;
        while(q->next != NULL)
        {
            q = q->next;
        }
        q->next = temp;
        temp->prev = q;
    }
}
void display()
{
    q=start;
    while(q!=NULL)
    {
        cout<<q->data<<endl;
        q = q->next;
    }
}
void insert()
{
    cout << " Press 1 for insertion at start\n " ;
    cout << "Press 2 for insertion at middle\n " ;
    cout << "Press 3 for insertion at end\n " ;
    int choice;
    cin>>choice;
    switch(choice)
    {
    case 1:
        system("cls");
        temp = new node;
        cout<<"Enter data \n";
        cin>>temp->data;
        start->prev =temp;
        temp->next = start;
        start =  temp;
        temp -> prev = NULL;
        break;
    case 2:
        system("cls");
        cout<<"Enter the data aftre which u want to add this\n";
        int ch;
        cin>>ch;
        q= start;
        while(q->next!=NULL)
        {
            if(q->data == ch)
            {
                temp = new node;
                cout<<"Enter data \n";
                cin>>temp->data;
                q->next->prev = temp;
                temp->next = q->next;
                temp->prev = q;
                q->next = temp;

            }
            q = q->next;
        }
        break;
    case 3:
        system("cls");
        temp = new node;
        cout<<"Enter data\n";
        cin>> temp->data;
        temp->next = NULL;
        q =  start;
        while(q->next != NULL)
        {
            q= q->next;
        }
        q->next =  temp;
        temp->prev = NULL;
    }
}
void del()
{
    system("cls");
    cout<<"Enter the data you want to delete \n";
    int num;
    cin>>num;
    q = start;
    if (start->data == num)
        start = start -> next;
    else
    {
        while(q != NULL)
        {
            if(q->next->data == num)
            {
                temp = q->next;
                q->next = temp->next;
                temp->next->prev = q;
                delete temp;
            }
            q = q->next;
        }
    }
}


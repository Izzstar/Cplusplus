/*  Author: Bhavya Shah
    All Copyright reserved
    Copyright c 2018  */

    /* Program of List using Template Library */
#include<iostream>
#include<list>
#include<windows.h>
using namespace std;
void showlist(list <int> l);
int main()
{
    int info,choice;
    cout<<"\t\t\t\t\t\tWELCOME TO C++"<<endl;
    list <int> l1;
abc:
    cout<<"Enter your choice:\n1. Insert\n2. Delete \n3. Sort"<<endl;
    cout<<"\nYour choice: ";
    cin>>choice;
    system("color 1a");
    switch(choice)
    {
    case 1:
        cout<<"\n\tFrom where do you want to Insert:\n\t1. First\n\t2. Last\n\t3. Anywhere"<<endl;
        cout<<"\nYour choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter element to insert: ";
            cin>>info;
            l1.push_front(info);
            showlist(l1);
            goto abc;
        case 2:
            cout<<"Enter element to insert: ";
            cin>>info;
            l1.push_back(info);
            showlist(l1);
            goto abc;
        case 3:
            cout<<"Enter element to insert: ";
            cin>>info;
            cout<<"Position: ";
            int pos;
            cin>>pos;
            list <int> :: iterator it = l1.begin();
            advance(it,pos);
            l1.insert(it,info);
            showlist(l1);
            goto abc;
        }
        goto abc;

    case 2:
        if(l1.empty())
        {
            cout<<"List is empty"<<endl;
            cout<<"\nSize of the list: "<<l1.size()<<endl;
            goto abc;
        }
        else{
        cout<<"\n\tFrom where do you want to Delete:\n\t1. First\n\t2. Last \n\t3.Anywhere "<<endl;
        cout<<"\nYour choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            l1.pop_front();
            showlist(l1);
            goto abc;
        case 2:
            l1.pop_back();
            showlist(l1);
            goto abc;
        case 3:
            cout<<"Position: ";
            int pos;
            cin>>pos;
            list <int> :: iterator it = l1.begin();
            advance(it,pos);
            l1.erase(it);
            showlist(l1);
            goto abc;
        }
        goto abc;
    }
case 3:
    if(l1.empty()){
        cout<<"\nList is empty!\nplease enter some data first\n"<<endl;
    goto abc;
    }
    else
    l1.sort();
    showlist(l1);
    goto abc;
}


    return 0;
}
void showlist(list <int> l)
{
    cout<<"\nyour list: ";
    list <int> :: iterator it;
    for(it = l.begin() ; it!=l.end() ; it++)
            cout<<'\t'<<*it;
    cout<<"\n"<<endl;
    cout<<"Size of the list: "<<l.size()<<endl<<"\n";
    system("color 0f");
}



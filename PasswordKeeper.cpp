/*  Author: Bhavya Shah
    All Copyright reserved
    Copyright c 2018  */

    /* Program of List using Template Library */
#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;
fstream data_entry;
int intro(int choice);
void display(int line_counter, string line);
void entry(string plat, string id, string pass);
void supreme(int line_counter, string platform, string id, string password, string line);
void keygen(string key, int line_counter, string platform, string id, string password, string line);
int main()
{
    string platform,id,password,line,key="";
    int line_counter=0,key_counter=0;
    cout<<"\t\t\t\t\t\tWELCOME TO C++"<<endl;
    cout<<"\nThis program will help you remember your Passwords..."<<endl;
    keygen(key,line_counter,platform,id,password,line);
    system("pause");
    return 0;
}
void supreme(int line_counter, string platform, string id, string password, string line)
{
    int choice=intro(choice);
    switch(choice)
    {
    case 1:
        entry(platform,id, password);
        supreme(line_counter,platform,id,password,line);
        break;
    case 2:
        cout<<"\n\t\t\tDisplaying Data..."<<endl<<endl;
        display(line_counter, line);
        supreme(line_counter,platform,id,password,line);
        break;
    case 3:
        cout<<"Delete a entry: "<<endl<<endl;
        delete
        supreme(line_counter,platform,id,password,line);
        break;
    case 4:
        system("color 3c");
        cout<<"\t\t\t\t\t\tTHANK YOU! VISIT ME AGAIN"<<endl;
        break;
    default:
        cout<<"\nMade By Bhavya Shah.... Irrelevant Answer for Incorrect Choice!"<<endl;
        break;
    }
}
void keygen(string key, int line_counter, string platform, string id, string password, string line){
//keygen:
    cout<<"\nKey: ";
    cin>>key;
    if(key == "bhavya0598")
    {
        system("color 1a");
        supreme(line_counter,platform,id,password,line);
    }
    else
    {
        system("color 4b");
        cout<<"\n****Access Denied****"<<endl;
        cout<<"Try again"<<endl;
        keygen(key,line_counter,platform,id,password,line);
        //goto keygen;
    }
}
int intro(int choice)
{
    cout<<"\nEnter the following choice: "<<endl;
    cout<<"1. New Data Entry\n2. Display Entries\n3. Delete a Entry\n4. Exit"<<endl;
    cout<<"\nYour Choice: ";
    cin>>choice;
    return choice;
}
void entry(string plat, string id, string pass)
{
    data_entry.open("DATA.txt",ios::in|ios::app);
    cout<<"\n\tEnter New Data"<<endl;
    cout<<"\nEnter Platform: ";
    cin>>plat;
    cout<<"\nEnter User Id: ";
    cin>>id;
    cout<<"\nYour password: ";
    cin>>pass;
    data_entry <<"Platform: "<<plat<<"\nUser ID: "<<id;
    data_entry<<"\nPassword: "<<pass<<endl;
    data_entry.close();
    cout<<"\n\n****Your data has been added!****"<<endl;
    cout<<"\nChoose the next Operation"<<endl;
}

void display(int line_counter, string line)
{
    data_entry.open("DATA.txt");
    if(data_entry.is_open())
    {
        while( getline(data_entry, line))
        {
            cout<<"\t\t"<<line<<endl;
            line_counter=line_counter+1;
            if(line_counter%3==0)
                cout<<endl;
        }
        data_entry.close();
    }
    else
        cout<<"file is not opened"<<endl;
    cout<<"\nChoose the next Operation:"<<endl;
}

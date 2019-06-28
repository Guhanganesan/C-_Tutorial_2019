#include<iostream>
using namespace std;

int main()
{
string fname="Guhan";
string lname="Ganesan";

cout << fname <<endl;
cout << fname+lname <<endl;

cout << lname.length() <<endl; //length

cout << lname[0] <<endl; //position

lname[0]='K';

cout <<lname <<endl; //update the particular character

string name;

cout <<"enter name"<<endl;
cin >>name;// when you provide string value, it consider only first word

cout <<name<<endl;

string addr;
cout <<"Get whole string"<<endl;

cout << "Enter addr"<<endl;
getline(cin,addr);
cout <<addr <<endl;

return 0;
}

/*
Answers:-

Guhan
GuhanGanesan
7
G
Kanesan
enter name
Guhan Ganesan
Guhan

Get whole string
Enter addr
No 23 Velachey Chennai
No 23 Velachey Chennai

*/
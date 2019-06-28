#include<iostream>
using namespace std;

int main()
{
    
string name="Guhan";
name.push_back('g');
cout << name <<endl;

name.pop_back();
cout<<name <<endl;

cout<< name.capacity() <<endl;
name.resize(4);
cout<< name <<endl;

cout << "Decreasing the capacity"<<endl;
name.shrink_to_fit();
cout<<name.capacity() <<endl;//Guha - 4

string city ="Ramanathapuram";
char sub[20];
city.copy(sub,5,0);// copy of string into char std::array
cout <<sub <<endl;

string fname="Guhan";
string lname="Ganesan";
fname.swap(lname);
cout <<fname <<endl;


return 0;
}


/*
Answers:-
Guhang
Guhan
10
Guha
Decreasing the capacity
4
Raman
Ganesan
 */
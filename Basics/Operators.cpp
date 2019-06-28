#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int y=5;
    
    cout << "Arithmetic operators \n";
    
    cout <<x+y <<endl;
    cout <<x-y <<endl;
    cout <<x*y <<endl;
    cout <<x/y <<endl;
    cout <<x%y <<endl;
   
    cout << "Increment or decrement operators\n";
    
    x++;
    cout <<x <<endl;
    cout <<x++ <<endl;
    cout <<--x <<endl;
    
    
    cout << "Assignment operators \n";
    x+=10;
    cout <<x <<endl;
    y-=2;
    cout <<y <<endl;
    
    
    cout <<"Comparioson operators\n";
    bool b1= x<y;
    bool b2= x>y;
    bool b3= x<=y;
    bool b4= x>=y;
    
    cout <<b1 <<endl;
    cout <<b2 <<endl;
    cout <<b3 <<endl;
    cout <<b4 <<endl;
    
}
/*
Answers:

Arithmetic operators 
15
5
50
2
0
Increment or decrement operators
11
11
11
Assignment operators 
21
3
Comparioson operators
0
1
0
1

 */
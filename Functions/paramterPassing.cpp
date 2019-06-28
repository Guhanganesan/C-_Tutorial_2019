#include<iostream>

using namespace std;
//Parameter Passing 

int add(int x, int y);//declarations

int main()
{
    add(10, 20);//function calling
}

int add(int x, int y)
{
    cout << x+y <<endl; // function definition
}

/*
Answer:-
30
 */

#include<iostream>

using namespace std;
//Retrun values 

int add(int x, int y);//declarations

int main()
{
   int res=  add(10, 20);
   cout << res <<endl;
}

int add(int x, int y)
{
    int z=x+y;
    return z;
}

/*
 Answer:-
 30

 */

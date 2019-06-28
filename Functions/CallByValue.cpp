/*
Call By value:-

The call by value method of passing arguments to a function copies the actual value of an argument
into the formal parameter of the function. In this case, changes made to the parameter inside the 
function have no effect on the argument.

*/

#include<iostream>

using namespace std;
//Retrun values 

int swap(int x, int y);//declarations

int main()
{
   int a=10; int b=20;
   cout << "before changed: "<<a <<endl;
   cout << "before changed: "<<b <<endl;
   
   swap(10, 20);
   
   cout << "after changed: "<<a <<endl;
   cout << "after changed: "<<b <<endl;
}

int swap(int x, int y)
{
    int temp;
    temp=x;
    x=y; 
    y=temp;
}


/*
Answer:-
10
20

 */
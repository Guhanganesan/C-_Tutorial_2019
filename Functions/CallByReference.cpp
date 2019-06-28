/*
Call By Reference:-

The call by reference method of passing arguments to a function copies the reference of an argument
into the formal parameter. Inside the function, the reference is used to access the actual argument
used in the call. This means that changes made to the parameter affect the passed argument.

*/

#include<iostream>
using namespace std;
//Retrun values 
int swap(int &x, int &y);//declarations

int main()
{
   int a=10; int b=20;
   cout << "before changed: "<<a <<endl;
   cout << "before changed: "<<b <<endl;
   
   swap(a, b);
   
   cout << "after changed: "<<a <<endl;
   cout << "after changed: "<<b <<endl;
}

int swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y; 
    y=temp;
}

/*
Answer:-
before changed: 10
before changed: 20
after changed: 20
after changed: 10
*/
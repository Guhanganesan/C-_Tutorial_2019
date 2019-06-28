/*
Pointer is a variable whose value is the address of another variable
 */
#include<iostream>
using namespace std;
int main()
{
    int *a; // declaring a pointer variable
    int b=200;  // normal variable declaration
    a=&b;   //assign address into poiter varibale
    cout << a <<endl; //print address
    cout << *a <<endl; //print value of an address 

}

/*
Answer:-
0x7ffcf52a5634
200
*/

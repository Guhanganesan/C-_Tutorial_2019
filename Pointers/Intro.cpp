/*
 Every variable has memory location
 Every memory location has its own address
 The address of the memory can be accessed using the symbol &(ampersand)
 */

#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;
    cout << "The address of a is: "<< &a <<endl;
    cout << "The address of a is: "<< &a <<endl;

}

/*
Answer:-
The address of a is: 0x7ffceb912688
The address of a is: 0x7ffceb91268c
*/

#include<iostream>
using namespace std;
int main()
{
    int a=10; 
    int b=20;  
    int *p,*q;
    p=&a;
    q=&b;
    cout << p <<endl; 
    cout << q <<endl;
    
    cout << *p <<endl; 
    cout << *q <<endl;
    
    *p=40;
    *q=*p;  //value is exchanged
    cout << *p <<endl; 
    cout << *q <<endl;
    
    *p=50;
    *q=100;
     p=q; //exchanged the address so value also moved along with address
    cout << *p <<endl; 
    cout << *q <<endl;
}
/*
Answer:-
0x7ffcb5464438
0x7ffcb546443c
10
20
40
40
100
100
*/

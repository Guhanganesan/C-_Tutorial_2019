#include<iostream>
using namespace std;

class A 
{
    public:
    virtual void disp()
    {
        cout<<"Parent Class method"<<endl;
    }
};

class B : public A 
{
    public:
    void disp()
    {
        cout<<"Child Class Method"<<endl;
    }
};

int main()
{
    A *a;
    a=new A;
    a->disp();
    
    B b;
    a=&b;
    a->disp();
}
/*
Answer:-
Parent Class method
Child Class Method
*/

#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void display()
    {
        cout << "display() method in base class"<<endl;
    }
    void show()
    {
        cout<< "method show() in base class"<<endl;
    }
};
class Derived : public Base
{
    public:
    void display()
    {
        cout <<"display() method in child class"<<endl;
    }
    void show()
    {
        cout <<"show() method in child class"<<endl;
    }
};

int main()
{
    Base *b;
    b=new Base;
    b->display();
    
    Derived d;
    b=&d;
    b->display();
    b->show();
}

/*
display() method in base class
display() method in child class
method show() in base class
*/

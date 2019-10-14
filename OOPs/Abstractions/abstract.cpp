#include<iostream>
using namespace std;

class A 
{
    public:
    virtual void disp()=0;
};

class B : public A 
{
    public:
    void disp()
    {
        cout<<"Hi"<<endl;
    }
};

int main()
{
    B obj;
    obj.disp();
    return 0;
}

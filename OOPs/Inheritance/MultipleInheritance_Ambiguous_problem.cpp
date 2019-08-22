#include<iostream>
using namespace std;

class A 
{
   public:
   void add()
   {
       cout<<"Add"<<endl;
   }
};

class B 
{
    public:
    void add()
    {
        cout <<"add"<<endl;
    }
};
class C:public A, public B
{
   public:
   void displayClassAmethod()
   {
       A::add();
   }
   void displayClassBmethod()
   {
       B::add();
   }
};

int main()
{
   C obj;
   obj.displayClassAmethod();
   obj.displayClassBmethod();
   return 0;
}

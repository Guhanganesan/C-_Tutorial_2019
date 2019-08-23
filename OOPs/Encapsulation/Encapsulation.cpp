#include<iostream>
using namespace std;

class A 
{
    public:
    string name="Guhan";
    private:
    int pin=1234;
    protected:
    int mob=762373;
    public:
    void getData()
    {
        cout<<name; //can get
        cout<<pin; //can get
        cout<<mob; //can get
    }
};

class B:public A 
{
    public:
    void display()
    {
       //cout<<name; 
       //cout<<pin;  //can't
       //cout<<mob; //can get
    }
    
};

int main()
{
   // B obj;
   // obj.display();
    //cout<<obj.name; //can get
    //cout<<obj.pin;  //can't
    //cout<<mob;     //can't
    
    A obj;
    obj.getData();
    return 0;
}

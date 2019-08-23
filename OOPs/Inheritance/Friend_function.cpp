#include<iostream>
using namespace std;

class demo
{
    private:
    int x;
    public:
    void set(int a)
    {
        x=a;
    }
    friend void get(demo ob)
    {
        cout<<"x is: "<<ob.x<<endl;
    }
       
};

int main()
{

demo obj;
obj.set(50);
get(obj);
return 0;
}

/*
Answer:
x is: 50
*/

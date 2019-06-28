#include<iostream>
using namespace std;
class Test
{
    public:
    string name;
    int age;
};

int main()
{
    Test myobj;
    myobj.name="Guhan Ganesan";
    myobj.age=28;
   
    cout << myobj.name <<endl;
    cout << myobj.age <<endl;
    return 0;
}
/*
Answer:
Guhan Ganesan
28
*/
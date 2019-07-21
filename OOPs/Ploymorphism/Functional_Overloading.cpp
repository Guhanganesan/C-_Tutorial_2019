#include<iostream>
using namespace std;

class Marks
{
    int internal=0, external=0;
    public:
    Marks()
    {
        internal=10;
        external=5;
    }
    void add()
    {
        cout << internal+external<<endl;
        cout << internal-external<<endl;
    }
    void add(int x, int y)
    {
        internal=x;
        external=y;
        cout << internal+external<<endl;
    }
    void add(int x, int y, float z)
    {
        internal=x;
        external=y;
        cout << internal+external+z<<endl;
    }
};

int main()
{
    Marks m1;
    m1.add();
    m1.add(30,40);
    m1.add(10,10,10.5);
    return 0;
}

/*
15
5
70
30.5
*/

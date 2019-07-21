#include<iostream>
using namespace std;

class Marks
{
    int internal=10, external=20;
    public:
    Marks()
    {
        internal=0;
        external=0;
    }
    Marks(int im, int em)
    {
        internal=im;
        external=em;
    }
    void display()
    {
        cout << internal <<endl << external <<endl;
    }
    
    Marks operator-(Marks m)
    {
        Marks temp;
        temp.internal=internal+m.internal;
        temp.external=external+m.external;
        return temp;
    }
};

int main()
{
    Marks m1(20,30), m2(10,10);
    Marks m3 =m1-m2;
    m3.display();
    return 0;
}
/*
30
40
*/

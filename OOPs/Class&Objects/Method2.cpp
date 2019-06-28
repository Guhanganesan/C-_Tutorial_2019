#include<iostream>
using namespace std;
class Mobile
{
    public:
    void start(int x, int y); //parameters
    int  stop(int x, int y);
};

void Mobile::start(int x, int y) //definitions are outside the class
{
        cout << x+y <<endl;
}
int Mobile::stop(int x, int y)
{
        cout << x+y <<endl;
        return 0;
}

int main()
{
    Mobile nokia;
    nokia.start(10,20);
    nokia.stop(20,30);
    return 0;
}

/*
Answer:-
30
50
*/
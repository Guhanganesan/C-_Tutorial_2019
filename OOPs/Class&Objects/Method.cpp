#include<iostream>
using namespace std;

class Mobile
{
    public:
    void start() //definitions are inside the class
    {
        cout << "starting" <<endl;
    }
    void stop()
    {
        cout << "stopping" <<endl;
    }
    
};

int main()
{
    Mobile nokia;
    nokia.start();
    nokia.stop();
    
    return 0;
}
/*
Answer:-
starting
stopping
*/
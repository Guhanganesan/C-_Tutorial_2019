#include<iostream>
using namespace std;
class Mobile
{
    public:
    void start();
    void stop();
};

void Mobile::start() //definitions are outside the class
{
        cout << "starting" <<endl;
}
void Mobile::stop()
{
        cout << "stopping" <<endl;
}

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

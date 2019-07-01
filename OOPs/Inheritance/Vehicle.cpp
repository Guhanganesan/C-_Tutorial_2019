#include<iostream>
using namespace std;

class Vehicle
{
    public:
    void start()
    {
        cout << "Start Car" <<endl;
    }
    void stop()
    {
        cout << "Stop Car" <<endl;
    }
    void applyBreak()
    {
        cout << "Apply Break" <<endl;
    }
};

int main()
{
    Vehicle car;
    car.start();
    car.stop();
    car.applyBreak();
}


/*
Answer:-
Start Car
Stop Car
Apply Break
*/

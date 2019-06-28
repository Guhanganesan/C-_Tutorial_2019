#include<iostream>
using namespace std;

class Mobile
{
    public:
    string name;
    float rate;
};

int main()
{
    Mobile nokia;
    nokia.name="Nokia";
    nokia.rate=7600;
   
    Mobile redmi;
    redmi.name="Redmi";
    redmi.rate=7800;
    
    cout << redmi.name <<endl;
    cout << redmi.rate <<endl;
    
    cout << nokia.name <<endl;
    cout << nokia.rate <<endl;
   
    return 0;
}

/*
Answer:-

Redmi
7800
Nokia
7600

*/
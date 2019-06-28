#include<iostream>
using namespace std;

int main()
{
    int x=100;
    cout <<x;
    
    int pin=1234;
    cout <<pin;
    
    int Pin=4321;
    cout <<Pin;
    
    int PIN=1234;
    cout <<PIN;
    
    int pin56=2323;
    cout <<pin56;
    
    //int 56Pin=4545;  // expected unqualified-id before numeric constant
    //cout <<56Pin;
    
    int _pin=9090;
    cout <<_pin;
    
    int pin$ =3030;
    cout <<pin$;
    
    //int pin#=9080; //can't use special chars except _ and $
    //cout <<pin#;
    
    return 0;
}

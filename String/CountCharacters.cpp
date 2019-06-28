#include<iostream>
using namespace std;
int main()
{
string name="Guhan Ganesan";
char x;
int count=0;
cout << "Eneter char to count" <<endl;
cin>> x;

for(int i=0; i<name.length(); i++)
{
    if(x==name[i])
    {
        count++;
    }
}
cout << "The number of "<< x <<" is "<< count <<endl;
return 0;
}

/*
Eneter char to count
a
The number of a is 3
 */
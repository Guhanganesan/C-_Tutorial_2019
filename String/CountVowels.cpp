#include<iostream>
using namespace std;
int main()
{
   
string name;
int count=0;
cout << "Eneter string to count vowels" <<endl;
getline(cin,name);

for(int i=0; i<name.length(); i++)
{
    if('a'==name[i] || 'e'==name[i] || 'i'==name[i] ||
        'o'==name[i] || 'u'==name[i])
    {
        count++;
    }
}

cout << "The number of vowels is "<< count <<endl;
return 0;
}

/*
Eneter string to count vowels
Guhan Ganesan
The number of vowels is 5
*/

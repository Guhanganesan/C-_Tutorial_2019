#include<iostream>
using namespace std;
int main()
{
   
string name;
int vowels_count=0;
int cons_count=0;
cout << "Eneter string to count vowels" <<endl;
getline(cin,name);

for(int i=0; i<name.length(); i++)
{
    if('a'==name[i] || 'e'==name[i] || 'i'==name[i] ||
        'o'==name[i] || 'u'==name[i])
    {
        vowels_count++;
    }
    else
    {
        cons_count++;
    }
    
}

cout << "Vowels count is "<< vowels_count <<endl;
cout << "Consonant count is "<< cons_count <<endl;
return 0;
}

/*
Answer:-
Eneter string to count vowels
education
Vowels count is 5
Consonant count is 4
 */
#include<iostream>
using namespace std;
int main()
{
 string name;
 string temp="";
 cout <<"Enter Name to Reverse" <<endl;
 cin >>name;
 //cout<< name[0]<<name[1]<<endl;
 //cout<<name.length()<<endl;
 for(int i=name.length()-1; i>=0; i--)
 {
     char ch =name[i];
     //cout<<ch<<endl;
     temp=temp+ch;
 }
 cout<<"Reversed name is: "<<temp<<endl;

return 0;
}

/*
Answer:-
Enter Name to Reverse
Guhan
Reversed name is: nahuG
 */

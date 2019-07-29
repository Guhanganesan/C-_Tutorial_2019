#include <fstream>
#include <iostream>
using namespace std;
int main () 
{
  char data[100];
  ofstream file;
  file.open("test.dat");

  cout << "Writing to the file" << endl;
  cout << "Enter your name... "; 
  cin.getline(data, 100);
  file << data << endl;
  cout <<data <<endl;

  cout << "Enter your age: "; 
  cin >> data;
  cin.ignore();
  file << data << endl;
  cout<<data<<endl;
  
  file.close();
  
return 0;
}
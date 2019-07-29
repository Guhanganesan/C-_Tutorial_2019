#include <fstream>
#include <iostream>
using namespace std;
int main () 
{
  char data[100];
  ofstream file;
  file.open("test.dat");

  cout << "Writing to the file" << endl;
  cout << "Enter text... "; 
  cin.getline(data, 100);
  file << data << endl;

  cout <<data <<endl;

return 0;
}
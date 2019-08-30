#include <fstream>
#include <iostream>
using namespace std;
int main () 
{
  char data[100];
  ifstream file; 
  file.open("test.dat"); 
  cout << "Reading from the file" << endl; 
  file >> data; 
  cout << data << endl;
  file >> data; 
  cout << data << endl;
 
  file.close();
  
return 0;
}


 /*
  #include <fstream>
#include <iostream>
using namespace std;
int main () 
{
    //Read 
  string line;
  char data[100];
  ifstream file; 
  file.open("myfile.dat");
  if (file.is_open())
  {
    while ( getline (file,line) )
    {
      cout << line << '\n';
    }
    file.close();
  }
  
}
*/

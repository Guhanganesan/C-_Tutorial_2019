#include <fstream>
#include <iostream>
using namespace std;
int main () 
{
  char data[100];
  int status;
  ifstream file; 
  status=remove("test.txt");
  if(status==0)
  {
    cout<<"File has been removed";
  }
  file.close();
  
return 0;
}

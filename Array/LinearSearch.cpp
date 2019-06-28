//Linear search in array 
#include<iostream>
using namespace std;
int main()
{
  int arr[]={3,7,2,4,1,6,5};
  bool check=false; int num;
  int length=sizeof(arr)/sizeof(arr[0]);
  cout<<"Enter number to search"<<endl;
  cin>>num;
  for(int i=0; i<length; i++)
  {
     if(num==arr[i])
     {
       check=true;
     }
     
  }
  if(check==true)
  {
      cout << "Found"<<endl;
  }
  else
  {
      cout << "Not Found"<<endl;
  }
}

/*
Answer:-
Enter number to search
4
Found
*/

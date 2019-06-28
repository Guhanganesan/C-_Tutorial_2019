//Find maximum in array 
#include<iostream>
using namespace std;
int main()
{
  int arr[]={3,4,2,4,5,6,5};
  int temp=0;
  int length=sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<length; i++)
  {
    if(arr[i]>temp)
     
     {
        temp=arr[i];
     }
  }

  cout << "The maximu of array is:"<<temp<<endl;
}

/*
Answer:-
The maximu of array is:6
*/
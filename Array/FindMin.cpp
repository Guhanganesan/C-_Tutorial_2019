//Find minimum in array 
#include<iostream>
using namespace std;
int main()
{
  int arr[]={3,4,2,4,5,6,5};
  int temp=arr[0];
  int length=sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<length; i++)
  {
    if(temp>arr[i])
     
     {
        temp=arr[i];
     }
  }

  cout << "The minimum of array is:"<<temp<<endl;
}

/*
Answer:-
The minimum of array is:2
*/
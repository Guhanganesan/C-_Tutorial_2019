//Find maximum and minimum in array 
#include<iostream>
using namespace std;
int main()
{
  int arr[]={3,4,2,4,5,6,5};
  int min=arr[0];
  int max=0;
  int length=sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<length; i++)
  {
     if(arr[i]>max)
     {
        max=arr[i];
     }
     
     if(min>arr[i])
     {
        min=arr[i];
     }
  }

  cout << "The maximu of array is:"<<max<<endl;
  cout << "The minimum of array is:"<<min<<endl;
}


/*
 Answer:-
 The maximu of array is:6
 The minimum of array is:2
*/
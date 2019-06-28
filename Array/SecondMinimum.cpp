//Find second minimum in array 
#include<iostream>
using namespace std;
int main()
{
  int arr[]={3,7,2,4,1,6,5};
  int first=arr[0];
  int sec=arr[0];
  int length=sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<length; i++)
  {
     if(first>arr[i])//3>0
     {
        sec=first;
        first=arr[i];
     }
     
     else if(sec>arr[i])
     {
        sec=arr[i];
     }
  }

  cout << "The first minimum of array is:"<<first<<endl;
  cout << "The second minimum of array is:"<<sec<<endl;
}

/*
Answer:-
The first minimum of array is:1
The second minimum of array is:2
*/
//Find second maximum in array 
#include<iostream>
using namespace std;
int main()
{
  int arr[]={3,7,2,4,1,6,5};
  int first=0;
  int sec=0;
  int length=sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<length; i++)
  {
     if(arr[i]>first)//3>0
     {
        sec=first;
        first=arr[i];
     }
     
     else if(arr[i]>sec)
     {
        sec=arr[i];
     }
  }

  cout << "The first maximum of array is:"<<first<<endl;
  cout << "The second maximum of array is:"<<sec<<endl;
}

/*
Answer:-
The first maximum of array is:7
The second maximum of array is:6
*/
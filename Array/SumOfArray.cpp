#include<iostream>
using namespace std;
int main()
{
  int arr[]={3,4,2,4,5,6,5};
  int temp=0;
  //cout << sizeof(arr)/sizeof(arr[0]) <<endl;
  int length=sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<length; i++)
  {
    temp=temp+arr[i];
  }

  cout << "Sum of array is:"<<temp<<endl;
}

/*
Answer:-
Sum of array is:29
*/
 

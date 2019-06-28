#include<iostream>
using namespace std;
int main()
{
    int numbers[5];
    int *p;
    p=numbers;
    cout <<p <<endl;
    //Store values into an array 
    *p=10;
    cout << *p <<endl;
    p++;
    cout << p <<endl;
    *p=20;
    p=&numbers[2];
    *p=30;
    cout << *p <<endl;
    p=numbers+3;
    *p=40;
    p=numbers;
    *(p+4)=50;
    
    for(int i=0; i<5; i++)
    {
       printf("%d ",numbers[i]); 
    }

}

/*
Answer:-
0x7fffcf2782e0
10
0x7fffcf2782e4
30
10 20 30 40 50 
*/

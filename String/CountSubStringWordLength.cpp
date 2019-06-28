#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string line = "He is my dear friend Rajesh";
   
    string arr[6];
    int i = 0;
    
    stringstream ssin(line);
    
    while (ssin.good()){
        ssin >> arr[i]; // split string into sub string array
        ++i;
    }
    
    for(i = 0; i <6; i++){
        //cout << arr[i] << endl;
        string x= arr[i];
        cout << x.length() <<endl;
    }
}

/*
Answer:-
2
2
2
4
6
6
*/

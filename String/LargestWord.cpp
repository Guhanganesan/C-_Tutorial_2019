#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string line = "He is my dear friend Raja";
   
    string arr[6];
    int i = 0;
    string temp="";
    stringstream ssin(line);
    
    while (ssin.good()){
        ssin >> arr[i]; // split string into sub string array
        ++i;
    }
    
    for(i = 0; i <6; i++){
        //cout << arr[i] << endl;
        string x= arr[i];
        if(x.length()>temp.length())
        {
            temp=x;
        }

    }
    cout << temp <<endl;
}

/*
Answer:-
friend
*/

#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string line = "He is my dear friend Raja";
   
    string arr[6];
    int i = 0;
    string temp="";
    stringstream ssin(line);
    
    while (ssin.good()){
        ssin >> arr[i]; // split string into sub string array
        ++i;
    }
    
    for(i = 0; i <6; i++){
        //cout << arr[i] << endl;
        string x= arr[i];
        if(x.length()>temp.length())
        {
            temp=x;
        }

    }
    cout << temp <<endl;
}

/*
Answer:-
friend
 */
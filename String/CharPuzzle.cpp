#include<iostream>
using namespace std;
int main(){
        // if "ckr" ==> "emt"
		// if c+2 => e
		// if k+2 => m
		// if r+2 => t
		// then "tek"?
		
		string puzzle="emt";
		string temp="";
		for(char c='a'; c<='z'; c++)
		{
		   // cout << c <<endl; // prints a to z 
		   if(c==puzzle[0])
		   {
		       char ch =(char) (c+2);
		       temp=temp+ch;
		   }
		   else if(c==puzzle[1])
		   {
		       char ch =(char) (c+2);
		       temp=temp+ch;
		   }
		   else if(c==puzzle[2])
		   {
		       char ch =(char) (c+2);
		       temp=temp+ch;
		   }
		}
		cout << temp <<endl;
}


/*
Answer:-
gov
*/


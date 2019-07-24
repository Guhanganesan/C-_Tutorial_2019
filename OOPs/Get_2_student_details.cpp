#include<iostream>
using namespace std;
class College
{
    public:
    char name[30], id[10];
    int marks;
    public:
    void getDetails();
    void display();
};

void College::getDetails()
{
    cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"Enter Id"<<endl;
    cin>>id;
    cout<<"Enter Marks"<<endl;
    cin>>marks;
}

void College::display()
{
 cout<<"Student Name: "<<name <<endl;
 cout<<"Student Id: "<<id<<endl;
 cout<<"Student Marks "<<marks<<endl;
}


int main()
{
    
    College obj[2];
    cout<<"Enter Student Details:- "<<endl;
    obj[0].getDetails();
    obj[1].getDetails();
    
    cout<<"Student Information are:-"<<endl;
    obj[0].display();
    obj[1].display();
    
    return 0;
}

/*
Anser:-
Enter Student Details:- 
Enter Name
Guhan
Enter Id
A001
Enter Marks
88
Enter Name
Anbu
Enter Id
A002
Enter Marks
95
Student Information are:-
Student Name: Guhan
Student Id: A001
Student Marks 88
Student Name: Anbu
Student Id: A002
Student Marks 95
*/

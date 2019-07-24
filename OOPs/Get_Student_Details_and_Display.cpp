#include<iostream>
using namespace std;
class College
{
    public:
    char name[30], id[10];
    int marks;
    public:
    void getDetails();
    void calculate();
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
    College obj;
    obj.getDetails();
    obj.display();
    
    return 0;
}

/*
Result:-
Enter Name
Guhan
Enter Id
A001
Enter Marks
78
Student Name: Guhan
Student Id: A001
Student Marks 78
*/

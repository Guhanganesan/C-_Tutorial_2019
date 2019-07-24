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
    
    College obj[5];
    char ch; int i=0, objCount=0;
   
    while(ch!='n')
    {
        cout<<"Enter Student"<< (i+1)<<" Details:"<<endl;
        obj[i].getDetails();
        cout<<"Do you want to continue"<<endl;
        cin>>ch;
        i++;objCount++;
    }
   
    for(int j=0; j<objCount; j++)
    {
        cout<<"Student"<<(j+1)<<" Information is:"<<endl;
        obj[j].display();
    }
   
    
    return 0;
}

/*
Enter Student1 Details:
Enter Name
Guhan
Enter Id
A001
Enter Marks
76
Do you want to continue
y
Enter Student2 Details:
Enter Name
Anbu
Enter Id
A002
Enter Marks
85
Do you want to continue
y
Enter Student3 Details:
Enter Name
Sowmya
Enter Id
A003
Enter Marks
95
Do you want to continue
n
Student1 Information is:
Student Name: Guhan
Student Id: A001
Student Marks 76
Student2 Information is:
Student Name: Anbu
Student Id: A002
Student Marks 85
Student3 Information is:
Student Name: Sowmya
Student Id: A003
Student Marks 95
*/

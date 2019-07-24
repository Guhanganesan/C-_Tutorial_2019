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
   //Sorting
   College temp;
   
   for(int s=0; s<objCount; s++)
   {
       for(int t=0; t<objCount; t++)
       {
           if(obj[s].marks>obj[t].marks)
           {
               temp=obj[t];
               obj[t]=obj[s];
               obj[s]=temp;
           }
       }
       
   }
   
    for(int j=0; j<objCount; j++)
    {
        cout<<"Student Rank "<<(j+1)<<" Information is:"<<endl;
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
55
Do you want to continue
y
Enter Student2 Details:
Enter Name
Anbu
Enter Id
A002
Enter Marks
64
Do you want to continue
y
Enter Student3 Details:
Enter Name
Sowmya
Enter Id
A003
Enter Marks
75
Do you want to continue
y
Enter Student4 Details:
Enter Name
Raja
Enter Id
A004
Enter Marks
85
Do you want to continue
n
Student Rank 1 Information is:
Student Name: Raja
Student Id: A004
Student Marks 85
Student Rank 2 Information is:
Student Name: Sowmya
Student Id: A003
Student Marks 75
Student Rank 3 Information is:
Student Name: Anbu
Student Id: A002
Student Marks 64
Student Rank 4 Information is:
Student Name: Guhan
Student Id: A001
Student Marks 55
*/

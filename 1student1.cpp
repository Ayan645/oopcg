#include<iostream>
using namespace std;

class student
{
    string name;
    int rollno;
    string Class;
    char div;
    string dob;
    string blood;
    string contactaddress;
    long int telephone;
    string driving;
    
public:
    static int count;
    
    student()
    {
        Class = "SE";
        div = 'A'; 
        count++;
    }
    
    void getdata(){
        cout<<"\n\t Enter Name: ";
        cin>>name;
        cout<<"\n\t Enter Rollno: ";
        cin>>rollno;
        cout<<"\n\t Enter Date of Birth: ";
        cin>>dob;
        cout<<"\n\t Enter Blood Group: ";
        cin>>blood;
        cout<<"\n\t Enter Contact Address: ";
        cin>>contactaddress;
        cout<<"\n\t Enter Telephone Number: ";
        cin>>telephone;
        cout<<"\n\t Enter Driving Licence no.: ";
        cin>>driving;
    }
    
    void display();
    
    student(const student& s2)
    {
        name=s2.name;
        rollno=s2.rollno;
        Class=s2.Class;
        div=s2.div;
        dob=s2.dob;
        blood=s2.blood;
        contactaddress=s2.contactaddress;
        telephone=s2.telephone;
        driving=s2.driving;
    }
    
    ~student()
    {
        cout<<"\n\t Destructor invoked"<<endl;
    }
    
    static int number()
    {
        return count;
    }
    
    friend void compareStudents(student, student);
};

int student::count = 0;

void student::display()
{
    cout<<"\n\t Name is "<<name<<endl;
    cout<<"\n\t Roll no. is "<<rollno<<endl;
    cout<<"\n\t Class is "<<Class<<endl;
    cout<<"\n\t Division is "<<div<<endl;
    cout<<"\n\t Date Of Birth is "<<dob<<endl;
    cout<<"\n\t Blood group is "<<blood<<endl;
    cout<<"\n\t Address is "<<contactaddress<<endl;
    cout<<"\n\t Telephone no. is "<<telephone<<endl;
    cout<<"\n\t Driving License No. is "<<driving<<endl;    
    cout<<"\n\t +++++++++++++++++++++++++++++++++++++++++++++";
    
}

void compareStudents(student s1, student s2) {
    if (s1.rollno == s2.rollno) {
        cout << "\n\t Both students have the same roll no."<<endl;
    } else {
        cout << "\n\t Students have different roll nos."<<endl;
    }
}

int main()
{
    student s1;
    s1.getdata();
    s1.display();
    student s2(s1);
    s2.display();
    cout << "\n\t Number of students: " << student::number()<<endl;
    compareStudents(s1, s2);
    return 0;
}

// This file demonstrates the foundational concepts of Object-Oriented Programming (OOP).
// Theory:
// - **Classes and Objects**: The building blocks of OOP. A class is a blueprint for creating objects.
// - **Encapsulation**: Data is encapsulated within a class using private access modifiers to ensure security.
// - **Member Functions**: Functions inside the class that operate on the class's data members.
// - **Static Members**: Shared variables or methods that belong to the class, not to individual objects.
// - **Friend Functions**: External functions granted special access to the private data of a class.
// Example: The program creates a `student` class to manage and compare student details like name, roll number, and marks.

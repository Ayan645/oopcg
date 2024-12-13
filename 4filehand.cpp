#include<iostream>
#include<fstream>

using namespace std;

class student{
	public:
	int rollno;
	string name;
	int age;
	
	void add(){
		int n;
		ofstream myfile;
		myfile.open("Student.txt", ios::app); 
		cout<<"Number of student you want to add";
		cin>>n;
		
		
		for(int i=1;i<=n;i++){
		
			cout << "For student "<< i << endl;
		
			cout << "Enter roll number: ";
			cin>>rollno;
		
			cout << "Enter name: ";
			cin>>name;
		
			cout << "Enter age: ";
			cin>>age;
			
			myfile << rollno << " " << name << " " << age << endl;
		}
		
		myfile.close();
	}
};

int main(){
	student s1;
	s1.add();
	return 0;
}

// This file focuses on file handling in C++.
// Theory:
// - **File Streams**: Enables reading from and writing to files (`ofstream`, `ifstream`).
// - **Persistent Storage**: Data written to a file remains accessible even after the program ends.
// - **Append Mode**: Adds new data to an existing file without overwriting it (`ios::app`).
// Example: The program saves student details (roll number, name, age) into a text file and demonstrates basic file writing operations.

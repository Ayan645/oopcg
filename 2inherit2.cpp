#include<iostream>
using namespace std;

class publication{
	string title;
	float price;
public:
	void getdata(){
		cout<<"\n\tEnter Title" " " ;
		cin>>title;
		cout<<"\n\tEnter price";
		cin>>price;
	}
	void display(){
		cout<<"\n\tTitle is "<<title;
		cout<<"\n\tPrice is "<<price;
	}	
};
class book:public publication{
	int count;
public:
	void getbook(){
		cout<<"\n\tEnter No. of pages ";
		cin>>count;
	}
	void displaybook(){
		cout<<"\n\tNo. of pages are "<<count;
	}
};
class tape:public publication{
	float time;
public:
	void gettape(){
		cout<<"\n\tEnter playing time ";
		cin>>time;
	}
	void displaytape(){
		cout<<"\n\tplaying time is "<<time;
	}	
};


int main(){
	cout<<"\n\t 😀️";
	book b1;
	tape t1;
	b1.getdata();
	b1.getbook();
	t1.getdata();
	t1.gettape();
	b1.display();
	b1.displaybook();
	t1.display();
	t1.displaytape();
	return 0;
}


// This file explores inheritance, one of the four main pillars of OOP.
// Theory:
// - **Inheritance**: Enables the creation of new classes (derived classes) based on existing ones (base classes), reusing code.
//     - **Single Inheritance**: A derived class inherits from one base class.
//     - **Multilevel Inheritance**: A class inherits from a derived class, forming a chain.
// - **Access Specifiers**: Controls access to members during inheritance.
//     - **Protected**: Accessible within the class and derived classes but not outside.
// - **Base and Derived Class Constructors**: The base class constructor runs first, ensuring initialization before the derived class constructor.
// Example: The program showcases inheritance by creating a hierarchy of classes and invoking overridden functions.

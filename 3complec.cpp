#include<iostream>
using namespace std;

class complex{
	int r,i;
	public:
	friend void operator>>(istream &in,complex &c);
	friend void operator<<(ostream &out,complex &c);
	complex(){
		r=0;
		i=0;
	}
	void operator +(complex c2){
		complex c3;
		c3.r=r+c2.r;
		c3.i=i+c2.i;
		cout<<c3;
	}
	
	void operator *(complex c2){
		complex c3;
		c3.r=(r*c2.r)-(i*c2.i);
		c3.i=(r*c2.i)+(i*c2.r);
		cout<<c3;
	}
};

void operator >>(istream &in,complex &c){
	cout<<"\n Enter Real and Imaginary part";
	in>>c.r>>c.i;
}

void operator <<(ostream &out , complex &c){
	out<<c.r<<"+"<<c.i<<"i";
}

int main(){

	complex c1,c2;
	cout<<c1;
	cout<<"\n";
	cout<<c2;
	cout<<"\n Enter First complex number";
	cin>>c1;
	cout<<"\n Enter second complex number";
	cin>>c2;
	cout<<"\n first complex no. is";
	cout<<c1;
	cout<<"\n second complex no. is";
	cout<<c2;
	cout<<"\n addition is \n";
	c1+c2;
	cout<<"\n Multipliction is \n";
	c1*c2;
	cout<<"\n";
	
	return 0;
}

// This file demonstrates operator overloading for user-defined types.
// Theory:
// - **Operator Overloading**: Extending the functionality of operators to work with user-defined objects.
// - **Friend Functions**: Provide external access to private members for operator overloading.
// - **Complex Number Operations**: Demonstrates addition and multiplication of complex numbers using overloaded operators.
// Example: The program performs arithmetic on complex numbers, showcasing operator overloading for `+` and `*`.

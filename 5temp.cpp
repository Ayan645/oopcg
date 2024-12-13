#include<iostream>
using namespace std;
template<class T>
class temp{
	public:
	int no;
	T arr[50];
	void getdata(){
		cout<<"Number of data to store";
		cin>>no;
		for(int i=0;i<no;i++){
			cout<<"Enter data";
			cin>>arr[i];
		}
	}
	
	void selectionsort(){
		for (int i = 0; i < no - 1; i++)
		{
			int min_idx = i;
			for (int j = i + 1; j < no; j++)
			{
			    if (arr[j] < arr[min_idx])
				min_idx = j;
			}

			if (min_idx != i)
			    swap(arr[min_idx], arr[i]);
	    	}
	}
	
	void display(){
		cout<<"Numbers are";
		for(int j=0;j<no;j++){
			cout<<arr[j];
			cout<<" ";
		}
	}
};

int main(){
	temp <int>t1;
	temp <float>t2;
	
	cout<<"\nfor int\n";
	t1.getdata();
	t1.selectionsort();
	t1.display();
	
	cout<<"\n\n\n for float\n";
	t2.getdata();
	t2.selectionsort();
	t2.display();
	
	return 0;
}

// This file demonstrates the use of templates for generic programming.
// Theory:
// - **Templates**: Allow writing code independent of data types, improving reusability and flexibility.
// - **Selection Sort**: Implements the selection sort algorithm to sort arrays of generic types.
// - **Class Templates**: Used to create a sorting class applicable to both integers and floating-point numbers.
// Example: The program sorts arrays of integers and floating-point numbers using a single template-based implementation.

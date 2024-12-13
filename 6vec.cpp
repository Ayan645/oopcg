#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Student {
public:
    string name;
    float dob;
    long long int number;

    void getData() {
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Date of Birth (year): ";
        cin >> dob;

        cout << "Enter Telephone Number: ";
        cin >> number;
    }

    string getName() const {
        return name;
    }

    friend void search(const vector<Student>& v, const string& name);
    friend void display(const Student& s);
    friend bool compareByName(const Student& s1, const Student& s2);
};

void display(const Student& s) {
    cout << s.name << "\t" << s.dob << "\t" << s.number << "\n";
}

bool compareByName(const Student& s1, const Student& s2) {
    return s1.name < s2.name;
}

void search(const vector<Student>& v, const string& name) {
    auto p = find_if(v.begin(), v.end(), [name](const Student& s) {
        return s.getName() == name;
    });

    if (p != v.end()) {
        cout << "Student Found:\n";
        display(*p);
    } else {
        cout << "Student with name " << name << " not found\n";
    }
}

int main() {
    vector<Student> v1;

    cout << "Insert Element in Vector:\n";
    for (int i = 0; i < 3; i++) {
        Student s1;
        s1.getData();
        v1.push_back(s1);
    }

    cout << "\nDisplaying the Elements in the vector:\n";
    for_each(v1.begin(), v1.end(), display);

    cout << "\nSorting using name:\n";
    sort(v1.begin(), v1.end(), compareByName);
    for_each(v1.begin(), v1.end(), display);

    string nameToBeSearched;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer again
    cout << "\nEnter name to be searched: ";
    getline(cin, nameToBeSearched);
    search(v1, nameToBeSearched);

    return 0;
}

// This file uses the Standard Template Library (STL) to manage collections dynamically.
// Theory:
// - **Vectors**: A dynamic array that can resize itself automatically when elements are added or removed.
// - **STL Algorithms**: Includes operations like sorting (`std::sort`) and searching (`std::find_if`).
// - **Lambda Expressions**: Enables concise representation of anonymous functions for custom conditions.
// Example: The program collects student data in a vector, sorts it by name, and allows searching for a specific student by name.


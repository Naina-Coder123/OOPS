#include <bits/stdc++.h>
using namespace std;
//Inheritence:when properties and member function of base class are passed on to derived class

//Single Inheritence
class Person {
  public:
    string name;
    int age;
    Person(string name, int age) { // Constructor
        this->name = name;
        this->age = age;
    }
};

class Student : public Person {
  public:
    int rollno;
    // Constructor for Student, calling the Person constructor
    Student(string name, int age, int rollno) : Person(name, age) {
        this->rollno = rollno;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Rollno: " << rollno << endl;
    }
};

int main() {
    // Create a Student object using the new constructor
    Student s1("John", 20, 23);

    s1.getInfo();
    return 0;
}

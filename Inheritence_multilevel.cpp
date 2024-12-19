#include<bits/stdc++.h>
using namespace std;
//Multi-level Inheritence
class Person{
 public:
 string name;
 int age;
  Person(string name,int age){
    this->name=name;
    this->age=age;
  }

};
class Student:public Person{
    protected:
    int rollno;
    public:
    Student(string name,int age,int rollno):Person(name,age){
        this->rollno=rollno;

    }
};
class Grad:public Student{
    public:
 string res;
 Grad(string name,int age,int rollno,string res):Student(name,age,rollno){
    this->res=res;
 }
 void getInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Rollno: "<<rollno<<endl;
    cout<<"res: "<<res<<endl;
 }

};
int main(){
    Grad g1("Naina",20,23,"Computer Science");
    g1.getInfo();
    return 0;
}
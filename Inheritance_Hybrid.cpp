#include<bits/stdc++.h>
using namespace std;
//Hybrid Inheritence
class Person{
 public:
 string name;
 int age;
  

};
class Student:public Person{
   public:
   int rollno;
};
class Grad:public Person,public Student{
    public:
 string res;
 

};
class Teacher:public Person{
public:
 double salary=650000.0;
};
class TA:public Person,public Student,public Teacher{
public:
 int subject;

};
int main(){
  Teacher t1;
  t1.name="Naina";
  cout<<t1.name<<endl;
  cout<<t1.salary<<endl;

}
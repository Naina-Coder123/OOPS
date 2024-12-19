#include<bits/stdc++.h>
using namespace std;
//Multiple Inheritence
class Person{
 public:
 string name;
 int age;
  

};
class Student{
   public:
   int rollno;
};
class Grad:public Person,public Student{
    public:
 string res;
 

};
int main(){
    Grad g1;
    g1.name="Naina";
    g1.age=20;
    g1.rollno=67;
    g1.res="Computer";
    cout<<g1.res<<endl;
    return 0;
}
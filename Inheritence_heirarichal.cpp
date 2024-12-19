#include<bits/stdc++.h>
using namespace std;
//Heirarichal Inheritence
class Person{
 public:
 string name;
 int age;
  

};
class Student:public Person{
   public:
   int rollno;
};
class Grad:public Person{
    public:
 string res;
 

};
int main(){
    Grad g1;
   g1.name="naina";
   Student s1;
   s1.name="deepa";
   cout<<g1.name<<endl;
   cout<<s1.name<<endl;

}
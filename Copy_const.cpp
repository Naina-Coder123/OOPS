#include<bits/stdc++.h>
using namespace std;
//In this Copy Constructor is used
class Student{
    public:
      string name;
      int age;
      Student(string name,int age){
        this->name=name;
        this->age=age;
          }
       void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        }

    

};
int main(){
    Student s1("Naina",20);
    Student s2(s1);//Using Default copy constructor which will make the shallow copy
    //shallow copy means copying the exact properties of one object into other
    s1.getInfo();
    return 0;
}
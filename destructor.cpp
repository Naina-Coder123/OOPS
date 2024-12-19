#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
      string name;
      int age;
    Student(string name,int age){
        this->name =name;
        this->age=age;
        cout<<"Hii,I am Constructor"<<endl;
    }
  
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
    ~Student(){
        cout<<"Hii,Iam Destructor"<<endl;
    }

};
int main(){
    Student s1("Naina",20);
    s1.getInfo();

}
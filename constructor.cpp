#include<bits/stdc++.h>
using namespace std;
//Constructor allocates the memory only for objects not for class
class Student{
    public:
     string name;
    int  rollno;
    //Constructor is always public
    //Written Below constructor is Non-Parameterised Constructor
    // Student(){
    //     cout<<"I am a constructor"<<endl;
    //     //Constructor is called only once,at object creation
    //}
    //Written below is Parametrised Constructor
    Student(string name,int rollno){
        this->name=name;
        this->rollno=rollno;

    }
    void getInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;
    }
   
};

int main(){
   Student s1("Name",114);//Memory allocation happened only when constructor is called
//    s1.name="Naina";
//    s1.rollno=114;
//    cout<<s1.name<<endl;
//    cout<<s1.rollno<<endl;

   s1.getInfo();
}
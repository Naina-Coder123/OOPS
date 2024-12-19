#include<bits/stdc++.h>
using namespace std;
//Polymorphism:It is the ability of object to taken on different forms or behave in different ways depending on the context in ehich they are used
//Types of Polymorphism:
//1)Compile Time Polymorphism
//2)Run-time Polymorphism
//1)
//Constructor Overloading
class Student{
    public:
    string name;
    // Student(){
    //     cout<<"Non-Parametrised\n";
    //}
    Student(string name){
        this->name=name;
        cout<<"Parametrised\n";
    }

};
int main(){
    Student s1("Naina");
    
    // s1.name="Deepa";
    // cout<<s1.name;
    return 0;
}


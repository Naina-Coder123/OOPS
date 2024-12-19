#include<iostream>
#include<string>
using namespace std;


//Creating the class of the teacher
class Teacher{
private:
     double salary;

 public:
    //properties attributes
  
    string name;
    string dep;
    string subject;
   
    //method /member function
    //Method is nothing but a function created by the class
    void changeDep(string newDep){
        dep=newDep;

    }
    //setter
    void setSalary(double s){
        salary=s;
    }
    //getter
    void getSalary(){
        return salary;
    }

};

//For creating the object
int main(){
    Teacher t1;
    
   t1.name="Shruti";
   t1.dep="CSE";
   t1.subject="c++";
   t1.setSalary(25000);
   cout << t1.name<<endl;
   cout << t1.getSalary()<<endl;

    return 0;
}
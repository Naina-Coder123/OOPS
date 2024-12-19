#include<bits/stdc++.h>
using namespace std;

class Student{
public:
   string name;
   double *cgpa_ptr;//pointing to nothinh

   Student(string name,double cgpa){
    this->name=name;
    cgpa_ptr=new double;//creating a pointer pointing to random location in heap memory
    *cgpa_ptr=cgpa;//storing the value of the cgpa in cgpa_ptr or in pointer in heap memory location

   }
   //Using Destructor which deallocates the memory
   ~Student(){
    cout<<"Hii,I am Destructor"<<endl;
    delete cgpa_ptr;
   }
   void getInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"CGPA: "<<*cgpa_ptr<<endl;
   }



};
int main(){
    Student s1("Rahul",8.9);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpa_ptr)=9.2;
    
  //As We have changed the s1 cgpa but it is not shoeing in s2 because it makes an shallow copy .To overcome this Deep copy comes

    s1.getInfo();
    s2.getInfo();
}

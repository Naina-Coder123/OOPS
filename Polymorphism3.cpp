#include<bits/stdc++.h>
using namespace std;
//Runtime Polymorphism
//Function Overriding
class Parent{
    public:
  void  getInfo(){
    cout<<"parent class\n";

    }

};
class Child:public Parent{
    public:
    void getInfo(){
        cout<<"Child class";
    }
};
int main(){
    Child c1;
    c1.getInfo();//It overrides the parent class
    return 0;
}
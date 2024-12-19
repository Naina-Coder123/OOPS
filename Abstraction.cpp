//Abstraction means:
//Hiding all the unnecessary details and show only important parts
//Using Abstract class means is not to create any class but to create the blue print of the classes
//It cannot be instantiated and are mean to be inherited
//It used to define an interface for derived classes
#include<bits/stdtr1c++.h>
using namespace std;
class Shape{
    public:
    //automatically creates the abstract class
    virtual void draw()=0;//pure virtual function
};
class circle:public Shape{
    public:
   void draw(){
        cout<<"Drawing a circle";
    }
};
int main(){
    circle c1;
    c1.draw();
    return 0;
}

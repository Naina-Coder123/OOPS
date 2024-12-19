#include<bits/stdc++.h>
using namespace std;

class Parent{
 void getInfo(){
    cout<<"Parent Class\n";
 }
 virtual void hello(){
    cout<<"Child class\n";
 }
};
class Child:public Parent{
    public:
    void getinfo(){
        cout<<"Child class\n";
    }
    void hello(){
        cout<<"hello from child\n";
    }
};
int main(){
    Child c1;
    c1.hello();
    return 0;
}

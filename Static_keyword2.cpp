#include<bits/stdc++.h>
using namespace std;

//Static Variable declared in a function are created and initialised once for a lifetime
class ABC{
    public:
    ABC(){
        cout<<"Constructor\n";

    }
    ~ABC(){
        cout<<"Destructor\n";
        
    }
};
int main(){
    if(true){
       static ABC obj;
    }
    cout<<"End of main\n";
    return 0;
}
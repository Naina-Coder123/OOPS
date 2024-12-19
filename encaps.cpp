#include<bits/stdc++.h>
using namespace std;

class Account {
    private:
   double balance;
   string password;
///Encapsulation
//Data hiding
    public:
    Account(string u,string ar,string acc,string pass,double bal){
      this-> username=username;
     
       password=pass;
       area=ar;
       balance=bal;
    }
    string username;
    long accountId;
    string area;
    void getInfo(){
        cout<<"username :"<<username<<endl;
        cout<<"area"<<area<<endl;
    }
};
int main(){
    Account a1 ("Naina","Kanpur",54654874,"jkxjkx",45412.5);
    a1.getInfo();
    
  cout<<a1.area<<endl;
    return 0;
}
#include<iostream>
using namespace std;

class Cricketer{
public:
int runs;
string name;
Cricketer(int runs,string name){
  this->name=name;
  this->runs=runs;

}

};
void change(Cricketer* c){
 (*c).runs=200;
  // c->runs=200;
  
}
int main(){

  Cricketer c1(100,"virat");
  // Cricketer* p = &c1;
  cout<< c1.runs<<endl;
  change(&c1);
  cout<<c1.runs<<endl;
  
  // int x=3;
  // int* p = &x;
  
  // cout<<&x<<endl;
  // cout<<p<<endl;
  
  // *p=8;
  // cout<<x;
  
}
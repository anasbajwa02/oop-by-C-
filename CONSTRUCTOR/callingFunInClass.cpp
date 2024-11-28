#include<iostream>
using namespace std;
class cricketer{
public:
int runs;
string name;
cricketer(int runs,string name){
  this->name=name;
  this->runs=runs;
  
}
void print(){
  cout<<name<<" "<<runs<<endl;

}
};

int main(){
  
  cricketer c1(100,"virat");
  cricketer c2(200,"rohit");

  c1.print();
  c2.print();
  // print(c1);
  // print(c2);
}
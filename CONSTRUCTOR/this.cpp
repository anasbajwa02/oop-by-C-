#include<iostream>
using namespace std;
class cricketer{
public:
string name;
int runs;
cricketer(string name , int runs){
  this->name = name;
  this->runs = runs;
  
}
};
void print(cricketer c){
  cout<<c.name<<" "<<c.runs<<endl;
  
}
int main(){
  cricketer c1("virat",100);
  cricketer c2("rohit",200);

  
  print(c1);
  print(c2);
}
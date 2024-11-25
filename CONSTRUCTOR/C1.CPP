#include <iostream>
using namespace std;
class Car {
public:
  string company;
  string model;
  float price;
  int year;

// This is a constructor with name of Car 
// note constructor is just like a function but does not has return type.
Car(string c, string m, float p, int y){
  company = c;
  model = m;
  price = p;
  year = y;
    
}

};





void print(Car c) {
  cout << c.company << " " << c.model << " " << c.price << " " << c.year
       << endl;
}
int main() {
  Car c1( "BMW", "BMW X5", 500000, 2020);
  

  print(c1);

  Car c2("Mercedes", "Mercedes E", 100000, 2019);
  

  print(c2);
}

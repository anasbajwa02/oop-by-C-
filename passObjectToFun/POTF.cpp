#include <iostream>
using namespace std;
class Car {
public:
  string company;
  string model;
  float price;
  int year;
};
void print(Car c) {
  cout << c.company << " " << c.model << " " << c.price << " " << c.year
       << endl;
}
int main() {
  Car c1;
  c1.company = "BMW";
  c1.model = "BMW X5";
  c1.price = 500000;
  c1.year = 2020;

  print(c1);

  Car c2;
  c2.company = "Mercedes";
  c2.model = "Mercedes E";
  c2.price = 100000;
  c2.year = 2019;

  print(c2);
}
// in functons object passed by value not pass by refrence but if we 
// write & in function then it will pass by refrence i.e() void print(Car& c)
//  {}; then it will by refrence and they will change this value in main function also.
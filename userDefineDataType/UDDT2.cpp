#include <iostream>
using namespace std;
class Car {
public:
  string company;
  string model;
  float price;
  int year;
};
int main() {
  Car c1;
  c1.company = "BMW";
  c1.model = "BMW X5";
  c1.price = 500000;
  c1.year = 2020;

  cout << c1.company << " " << c1.model << " " << c1.price << " " << c1.year<<endl;

  Car c2;
  c2.company = "Mercedes";
  c2.model = "Mercedes E";
  c2.price = 100000;
  c2.year = 2019;
  cout << c2.company << " " << c2.model << " " << c2.price << " " << c2.year<<endl;
}

#include <iostream>
using namespace std;

class Student {
public:
  int rollNo;
  string name;
  float gpa;
};

int main() {
  Student s1;
  Student s2;

  s1.rollNo = 01;
  s1.name = "Anas";
  s1.gpa = 3.5;
  
  cout << s1.rollNo << " " << s1.name << " " << s1.gpa << endl;

  s2.rollNo = 02;
  s2.name = "Rehman";
  s2.gpa = 3;
  
  cout << s2.rollNo << " " << s2.name << " " << s2.gpa << endl;
}
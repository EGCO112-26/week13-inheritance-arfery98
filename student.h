#include "MU_Person.h"


class student : public MU_person{
private:
  double gpa; 
	
public:
  student(int node_data, long id = 111, double gpa = 2.5, string name = "Nattawut");
  ~student();
  void display();
};

student::student(int node_data, long i, double g, string s) : MU_person(node_data, i, s) {
  gpa = g;
  cout << "MU student constructor  " << gpa << endl;
}

student::~student() {
  cout << "-------" << endl;
  cout << "student destructor " << gpa << endl;
}

void student::display() {
  display_person();
  cout << "GPA: " << gpa << endl;
}

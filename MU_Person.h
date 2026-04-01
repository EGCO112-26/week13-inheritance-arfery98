#include "LL_CPP/NODE.h"

class MU_person : public NODE {
private:
  string name;
protected:
  long id;
public:
  MU_person(int node_data, long id = 112, string name = "Prapaporn");
  void display_person();
  ~MU_person();
};

MU_person::~MU_person() {
  cout << "Destructor id=" << id << endl;
}

MU_person::MU_person(int node_data, long x, string n) : NODE(node_data) {
  id = x;
  name = n;
  cout << "MU person constructor " << id << endl;
}

void MU_person::display_person() {
  cout << "Show info student" << endl;
  cout << "id: " << id << "\nname: " << name << endl;
}
#pragma once
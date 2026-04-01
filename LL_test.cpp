#include <iostream>
#include <cstdlib>
#include "NODE.h"
#include "LL.h"
#include "MU_Person.h"
#include "student.h"
using namespace std;

int main(int argc, char *argv[]) {
    LL A;
    int i;
    NODE *t;

    for (i = 1; i < argc; i++) {
        // Create a student object instead of a generic NODE
        student *s = new student(atoi(argv[i]), 111, 3.5, "StudentName");
        s->display(); // Display student information
        t = s; // Treat student as a NODE
        A.add_node(t);
    }

    A.show_all(); // Show all nodes

    return 0;
}

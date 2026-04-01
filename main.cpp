#include <iostream>
#include <cstdlib>
#include "student.h"
#include "LL.h"
using namespace std;

int main(int argc, char *argv[]) {
    LL A;
    NODE *t;

    for (int i = 1; i < argc; i += 3) {
        int node_data = atoi(argv[i]);
        double gpa = atof(argv[i + 1]);
        string name = argv[i + 2];

        t = new student(node_data, node_data, gpa, name);
        //s->display(); // Display student information
        //t = s; // Treat student as a NODE
        A.add_node(t);
    }

    A.show_all(); // Show all nodes

    return 0;
}
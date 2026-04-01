#ifndef NODE_H
#define NODE_H
using namespace std;
class NODE{
      int data;
      NODE* next;
public:
      NODE(int);
      void show_node();
      void insert(NODE*&);
      NODE* move_next();
      ~NODE();
};

#endif
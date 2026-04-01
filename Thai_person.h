#include <iostream>
using namespace std;
class Thai_person{
	private: 
		long nat_id;
	public: 
		Thai_person(int);
};

Thai_person::Thai_person(int nid){
	nat_id = nid ;
	cout << "Nat id"<<nat_id<<endl;
}
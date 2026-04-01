compile: MU_Person.h student.h main.cpp
	g++ main.cpp NODE.cpp LL.cpp -o inh
run: inh
	./inh
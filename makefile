compile: MU_Person.h student.h main.cpp
	g++  NODE.cpp LL.cpp  main.cpp -o inh
run: inh
	./inh
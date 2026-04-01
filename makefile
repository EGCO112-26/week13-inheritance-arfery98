compile: MU_Person.h student.h main.cpp
	g++ main.cpp LL_CPP/NODE.cpp LL_CPP/LL.cpp -o inh
run: inh
	./inh.exe
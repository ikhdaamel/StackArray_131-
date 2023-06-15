#include <iostream>
#include<string>
using namespace std;

class StackArray {
private:
	string stack_array[5];
	int top;
public:
	StackArray() {															//constructor
		top = -1;
	}

	
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

	string push(string element) {
		if (top == 4) {														//step 1	
			cout << "number of data exceeds the limits." << endl;
			return "";
		}

		top++;																//step 2
	
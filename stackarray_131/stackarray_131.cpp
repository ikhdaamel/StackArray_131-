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
		stack_array[top] = element;											//step 3
		cout << endl;
		cout << element << "ditambahkan (pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) {														//step 1
			cout << "\nStack is empty. cannot pop" << endl;					//1.a
			return;															//1.b
		}

	
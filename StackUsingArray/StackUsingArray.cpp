#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//constructor
	StackArray() {
		top = -1;
	}


	int push(int element) {
		if (top == 4) {
			cout << "Number of Data exceed the list" << endl;
			return 0;

		}

		top++;
		stack_array[top] = element;
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;
		return element;
	}

	void pop() {
		if (empty()) { // step 2
			cout << "\n Stack is Empty, Cannot pop" << endl;
			return;
		}
		cout << "\n The Popped Element is : " << stack_array[top] << endl;
	}

	bool empty() {
		return (top == -1);
	}
	void display() {
		if (empty()) {
			cout << "\nStack is Empty." << endl;
		}
		else {
			for (int pop = top; top >= 0; top--) {
				cout << stack_array[top] << endl;
			}
		}
	}

	
	






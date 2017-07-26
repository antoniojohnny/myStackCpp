#include <iostream>
#include "MyStack.h"
#include "MyStack.cpp"
using namespace std;

class klasa {
	int liczba;
};

int main() {
	MyStack<int> myStack;	
	
	myStack.put(1);
	myStack.put(2);
	myStack.put(3);
	myStack.put(4);
	cout << myStack.takeFromTop() << endl;
	cout << myStack.takeFromTop() << endl;
	cout << myStack.takeFromTop() << endl;
	
	
	return 0;
}
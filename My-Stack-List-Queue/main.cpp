#include <iostream>
#include "MyList.h"
#include "MyList.cpp"
using namespace std;

class klasa {
	int liczba;
};

int main() {
	MyList<int> myList;
	myList.add(1);
	myList.add(2);
	myList.add(3);
	
	try {
		cout << myList.getLastElement() << endl;
		cout << myList.getElement(0) << endl;
	}
	catch (exception e) {
		cout<<e.what()<<endl;
	}






















	//MyStack<int> myStack;		
	//myStack.put(1);
	/*myStack.put(2);
	myStack.put(3);
	myStack.put(4);
	cout << myStack.takeFromTop() << endl;
	cout << myStack.takeFromTop() << endl;
	cout << myStack.takeFromTop() << endl;*/
	
	
	return 0;
}
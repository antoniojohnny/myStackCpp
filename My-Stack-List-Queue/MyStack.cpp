#include "MyStack.h"

template<class t> 
MyStack<t>::MyStack()
{
	this->size = 0;	
}

template<class t> 
MyStack<t>::~MyStack()
{
	delete top;
	top = nullptr;
	delete[] elements;
}

template<class t> 
void MyStack<t>::put(const t &element)
{
	int i;
	size++;
	MyStackElement *temp;
	myStackElement.setValue(element);
	if (size - 2 >= 0) {
		myStackElement.setPrev((elements + (size - 2)));
	}

	temp = elements;
	elements = nullptr;
	elements = new MyStackElement[size];
	if (size > 1) {
		for (i = 0; i < (size - 1); i++) {
			*(elements + i) = *(temp + i);
		}
	}
	*(elements + (size - 1)) = myStackElement;	
	delete[] temp;	
	top = (elements + (size - 1));	
}

template<class t>
t MyStack<t>::takeFromTop()
{
	t result = top->getValue();
	top = this->myStackElement.getPrev();
	size--;
	return result;
}
#include "MyList.h"

template<class t>
MyList<t>::MyList()
{
	size = 0;
	first = nullptr;
}

template<class t>
MyList<t>::~MyList()
{
}

template<class t>
void MyList<t>::add(const t& newElement)
{
	MyListElement*  myListElement = new MyListElement;
	myListElement->value = newElement;
	if (first == nullptr) {
		first = myListElement;
	}
	else {
		MyListElement* temp = first;
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = myListElement;
		myListElement->next = nullptr;
	}
	size++;
}

template<class t>
t MyList<t>::getElement(int number)
{
	int i;
	MyListElement* temp;

	temp = first;
	for (i = 0; i < number; i++) {
		temp = temp->next;
		if (temp == nullptr) {
			throw runtime_error("Number is bigger than List last element index. Use MyList.size() to check number of elements");
		}
	}
	if (temp == nullptr) {
		throw runtime_error("Number is bigger than List last element index. Use MyList.size() to check number of elements");
	}
	return temp->value;
}

template<class t>
t MyList<t>::getLastElement()
{
	MyListElement* temp;
	if (first == nullptr) {
		throw runtime_error("Number is bigger than List last element index. Use MyList.size() to check number of elements");
	}
	temp = first;
	while (temp->next != nullptr) {
		temp = temp->next;
	}
	return temp->value;
}

template<class t>
int MyList<t>::getSize()
{
	return size;
}

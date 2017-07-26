#pragma once
#include <stdexcept>
using namespace std;
template<class t> class MyList
{
public:
	MyList();
	~MyList();
	void add(const t& newElement);
	t getElement(int number);
	t getLastElement();
	int getSize();
private:
	class MyListElement {
	public:
		t value;
		MyListElement* next;
		MyListElement() { next = nullptr; }
	};

	MyListElement* first;
	int size;
};


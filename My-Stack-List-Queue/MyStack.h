#pragma once

template <class t> class MyStack
{
public:
	class MyStackElement {
	public:
		MyStackElement* prev;
		t value;
		MyStackElement() {}
		~MyStackElement() { 
			delete prev;
		}
		void setValue(const t &value2) { value = value2; }
		t getValue() { return value; }
		void setPrev(MyStackElement* prev2) { prev = prev2; }
		MyStackElement* getPrev() { return prev; }
	};
	MyStack();
	~MyStack();
	void put(const t &element);
	t takeFromTop();

private:
	MyStackElement myStackElement;
	MyStackElement *top;
	MyStackElement *elements;
	int size;
};


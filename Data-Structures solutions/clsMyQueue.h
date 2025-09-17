#pragma once


#include <iostream>
#include "clsDblLinkedList.h";


using namespace std;


template<class T>
class clsMyQueue 
{
public:
	clsDblLinkedList<T> _MyArr;

public:

	void push(T Value) {
	
		_MyArr.InsertAtEnd(Value);
	
	}

	void pop() {
	
		
			_MyArr.DeleteFirstNode();
		

	}

	void Print() {
	
		clsDblLinkedList<int>::Node* current = _MyArr.head;
		while (current != NULL)
		{
			cout << current->value << " ";
			current = current->next;
		}
		cout << "\n\n";
	
	}

	short Size() {

		return _MyArr.Size();

	}

	T front() {
	
		return _MyArr.GetItem(0);
	
	}

	T back() {

		return _MyArr.GetItem(Size() - 1);

	}

	T GetItem(short Index) {
	
		return _MyArr.GetItem(Index);
	
	}

	void Reverse() {
	
		_MyArr.Reverse();
	
	}

	void UpdateItem(short Index, T UpdatedValue)
	{
	
		_MyArr.UpdateItem(Index, UpdatedValue);
	
	}
	void InsertAfter(short Index, T Value) {
	
		_MyArr.InsertAfter(Index, Value);
	
	}
	void InsertAtFront(T Value) {
	
		_MyArr.InsertAtBegenning(Value);
	
	}
	void InsertAtBack(T Value) {

		_MyArr.InsertAtEnd(Value);

	}
	void Clear() {
	
		_MyArr.Clear();
	
	}
	
};


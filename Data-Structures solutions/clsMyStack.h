#pragma once
#include <iostream>
#include <iomanip>

#include "clsMyQueue.h";
#include "clsDblLinkedList.h";

using namespace std;

template<class T>
class clsMyStack :public clsMyQueue<T>
{

public:
	
	void push(T Value) {
		clsMyStack<int>::_MyList.InsertAtBegenning(Value);
	}

	T top() {
	
		return clsMyStack<int>::front();
	
	}
	T bottom() {
	
		return clsMyStack<int>::back();
	
	}

	void Print() {

		clsDblLinkedList<int>::Node* current = clsMyStack<int>::_MyList.head;

		cout << "\n|       |\n";

		while (current != NULL)
		{
			cout << "|" << setw(7) << left << current->value << "|\n";
			current = current->next;
		}
		cout << "_________\n";

	
	}

};


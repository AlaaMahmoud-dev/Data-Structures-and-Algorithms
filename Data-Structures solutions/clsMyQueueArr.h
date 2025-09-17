#pragma once

#pragma once


#include <iostream>
#include "clsDynamicArray.h";


using namespace std;


template<class T>
class clsMyQueueArr
{
protected:

	clsDynamicArray<T> _MyArr;

public:

	void push(T Value) {

		_MyArr.InsertAtEnd(Value);

	}

	void pop() {


		_MyArr.DeleteFirstItem();

	}

	void Print() {

		_MyArr.Print();
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

		_MyArr.SetItem(Index, UpdatedValue);

	}
	void InsertAfter(short Index, T Value) {

		_MyArr.InsertAfter(Index, Value);

	}
	void InsertAtFront(T Value) {

		_MyArr.InsertAtBeggining(Value);

	}
	void InsertAtBack(T Value) {

		_MyArr.InsertAtEnd(Value);

	}
	void Clear() {

		_MyArr.Clear();

	}

};


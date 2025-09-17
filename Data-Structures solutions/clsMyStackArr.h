#pragma once

#include <iostream>
#include <iomanip>

#include "clsMyQueueArr.h";
#include "clsDynamicArray.h";

template<class T>
class clsMyStackArr :public clsMyQueueArr<T>
{

public:

	void push(T Value) {
		clsMyStackArr<T>::_MyArr.InsertAtBeggining(Value);
	}

	T top() {

		return clsMyStackArr<T>::front();

	}
	T bottom() {

		return clsMyStackArr<T>::back();
		

	}

	void Print() {


		cout << "\n|       |\n";

		for (short i = 0; i < clsMyStackArr<T>::_MyArr.Size(); i++)
		{
			cout << "|" << setw(7) << left << clsMyStackArr<T>::_MyArr.OriginalArray[i] << "|\n";
		}
		cout << "_________\n";


	}

};


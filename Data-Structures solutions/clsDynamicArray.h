#pragma once

#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

template<class T>
class clsDynamicArray
{
	short _Size;
	T* _tempArray;

	void _Swap(T& Element1, T& Element2) {

		T temp = Element1;
		Element1 = Element2;
		Element2 = temp;

	}

protected:

public:
	T* OriginalArray;

	clsDynamicArray(short Size = 0) {

		if (Size < 0)
			Size = 0;

		_Size = Size;
		OriginalArray = new T[_Size];

	}

	bool SetItem(short Index, T Value) {

		if (Index >= _Size || _Size < 0)
		{
			return false;
		}

		OriginalArray[Index] = Value;
		return true;

	}

	bool isEmpty() {

		return (Size() == 0);

	}

	short Size() {

		return _Size;

	}

	void Print() {

		for (short i = 0; i < _Size; i++)
		{
			cout << OriginalArray[i] << " ";
		}
		cout << endl;
	}

	void Resize(short NewSize) {

		_tempArray = new T[NewSize];

		if (NewSize < 0)
			NewSize = 0;

		if (Size() == NewSize)
			return;

		if (NewSize < Size())
		{
			_Size = NewSize;
		}
		for (short i = 0; i < Size(); i++)
		{
			_tempArray[i] = OriginalArray[i];
		}



		_Size = NewSize;
		delete[] OriginalArray;
		OriginalArray = _tempArray;

	}

	T GetItem(short Index) {

		return OriginalArray[Index];

	}

	void Clear() {

		_Size = 0;
		_tempArray = new T[0];
		delete[] OriginalArray;
		OriginalArray = _tempArray;

		//OR
		//Resize(0);

	}

	void Reverse() {


		for (short i = 0; i < _Size / 2; i++)
		{
			_Swap(OriginalArray[i], OriginalArray[_Size - 1 - i]);
		}
		//Or Using tempArray


	}

	bool DeleteItem(short Index) {


		if (Index > _Size - 1 || Index < 0 || _Size == 0)
			return false;

		_Size--;
		_tempArray = new T[_Size];

		for (short i = 0; i < Index; ++i)
		{
			_tempArray[i] = OriginalArray[i];

		}

		for (short i = Index; i < _Size; i++)
		{
			_tempArray[i] = OriginalArray[i + 1];
		}
		delete[] OriginalArray;
		OriginalArray = _tempArray;
		return true;

		
	}

	bool DeleteFirstItem() {


		if (_Size == 0)
			return false;

		_Size--;

		_tempArray = new T[_Size];

		for (short i = 0; i < _Size; i++)
		{
			_tempArray[i] = OriginalArray[i + 1];
		}

		delete[] OriginalArray;
		OriginalArray = _tempArray;

		return true;

		//OR:
		//return DeleteItem(0);
	}

	bool DeleteLastItem() {
	
		if (_Size == 0)
			return false;

		_Size--;

		_tempArray = new T[_Size];

		for (short i = 0; i < _Size; i++)
		{
			_tempArray[i] = OriginalArray[i];
		}
		delete[] OriginalArray;
		OriginalArray = _tempArray;

		return true;

		//OR:
		//return DeleteItem(_Size - 1);
	}

	short Find(T Value) {
	
		for (short i = 0; i < _Size; ++i)
		{
			if (OriginalArray[i] == Value)
				return i;
		}
		return -1;

	}

	bool DeleteItem(T Value) {
	
		short Index = Find(Value);

		if (Index == -1)
			return false;

		return DeleteItem(Index);
	
	
	}

	bool InsertAt(short Index, T Value) {
	
		if (Index > _Size || Index < 0)
			return false;

		_Size++;
		_tempArray = new T[_Size];

		for (short i = 0; i < Index; ++i)
		{

			_tempArray[i] = OriginalArray[i];

		}
		_tempArray[Index] = Value;
		for (short i = Index; i < _Size - 1; i++)
		{
			_tempArray[i + 1] = OriginalArray[i];
		}
		delete[] OriginalArray;
		OriginalArray = _tempArray;
		return true;


	
	}

	bool InsertAtBeggining(T Value) {

		return InsertAt(0, Value);

	}

	bool InsertAtEnd(T Value) {


		return InsertAt(_Size, Value);
		
		
	}

	bool InsertBefore(short Index, T Value) {
	
		if (Index < 1)
		{
			return InsertAt(0, Value);
		}
		return	InsertAt(Index - 1, Value);

	
	}

	bool InsertAfter(short Index, T Value) {
	
		if (Index >= _Size)
		{
			return InsertAt(_Size, Value);
		}
		return InsertAt(Index + 1, Value);
	
	
	}

	

};

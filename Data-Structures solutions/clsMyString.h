#pragma once

#include <iostream>
#include <iomanip>

#include "clsMyStackArr.h";
#include <stack>



class clsMyString
{

	clsMyStackArr<string>_Redo;
	clsMyStackArr<string> _Undo;
	string _Value = "";
	stack<int>aaa;
	
public:
	

	void setValue(string Value) {
	
		_Undo.push(_Value);
		_Value = Value;

	}
	string GetValue() {
	
		return _Value;
	
	}
	__declspec(property(put = setValue, get = GetValue))string Value;


	void Undo() {

		_Redo.push(_Value);
		_Value = _Undo.top();
		_Undo.pop();

	}
	void Redo() {

		_Undo.push(_Value);
		_Value = _Redo.top();
		_Redo.pop();

	}
};


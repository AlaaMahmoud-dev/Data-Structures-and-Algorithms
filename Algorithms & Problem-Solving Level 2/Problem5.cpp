#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Messege) {

	int Number = 0;
	do {
		cout << Messege << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;

}
void PrintReversedNumber(int num) {

	int Remainder = 0;
	
	while(num>0) 
	{
		Remainder = num % 10;
		num = num / 10;

		cout << Remainder << endl;

	}

}

int main()
{

	PrintReversedNumber(ReadPositiveNumber("Please enter Positive Number"));





}

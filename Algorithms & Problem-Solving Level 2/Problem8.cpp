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
int DigitFrequency(int num,short Digit) {

	int FreqCount = 0;
	int Remainder = 0;

	while (num > 0)
	{
		Remainder = num % 10;
		num = num / 10;

		if (Remainder == Digit)
			FreqCount++;
	}
	return FreqCount;

}

int main()
{
   
	int Number = ReadPositiveNumber("Please enter main Number");
	short Digit = ReadPositiveNumber("Please enter Digit To check");
	cout << "\nDigit " << Digit << " Frequency is " << DigitFrequency(Number,Digit) << " Time(s)" << endl;


}

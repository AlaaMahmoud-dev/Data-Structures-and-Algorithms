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
int DigitFrequency(int num, short Digit) {
	int Remainder = 0;
	int FreqCount = 0;
	
		while (num > 0)
		{
			Remainder = num % 10;
			num = num / 10;

			if (Remainder == Digit)
				FreqCount++;
		}
	
	return FreqCount;

}

void PrintDigitFreq(int num) {

	short TimeFreq = 0;
	for (int i = 0; i < 10; i++) {

		TimeFreq = 0;
		TimeFreq=DigitFrequency(num, i);

		if (TimeFreq > 0)
			cout << "Digit " << i << " Frequency " << TimeFreq << " Time(s)" << endl;
	
	
	}

}
int main()
{
   
	PrintDigitFreq(ReadPositiveNumber("Please enter Positive Number"));


}


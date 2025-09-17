#include <iostream>
using namespace std;

int ReadPositiveNumber(string Messege) {

	int Number = 0;
	do {
		cout << Messege << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;

}
int SumDigits(int num) {

	int sum = 0;
	int Remainder = 0;

	while (num > 0)
	{
		Remainder = num % 10;
		num = num / 10;

		sum += Remainder;

	}
	return sum;
}

int main()
{

	cout << "\nSum of Digits=" << SumDigits(ReadPositiveNumber("Plz Enter Positive Number")) << endl;;



}


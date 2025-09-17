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
void PrintDigits(int num) {

	int Remainder = 0;

	while (num > 0)
	{
		Remainder = num % 10;
		num = num / 10;

		cout << Remainder << endl;

	}

}
int ReverseNumber(int num) {

	int Number2 = 0;
	int Remainder = 0;

	while (num > 0)
	{
		Remainder = num % 10;
		num = num / 10;

		Number2 = Number2 * 10 + Remainder;

	}
	return Number2;
}



int main()
{
   
	int num = ReadPositiveNumber("Please enter positive num");
	PrintDigits(ReverseNumber(num));



}

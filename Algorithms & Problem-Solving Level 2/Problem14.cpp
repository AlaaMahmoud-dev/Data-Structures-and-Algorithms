#include <iostream>
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
void PrintInvertedLetterPattern(int Number) {

	for (int i = 65 + Number - 1; i >= 65; i--)

	{
		for (int j = 1; j <= Number - (65 + Number - 1 - i); j--)
			cout << char(i);

		cout << endl;
	}
}


int main()
{

	PrintInvertedLetterPattern(ReadPositiveNumber("Plz enter Positive Number"));

}

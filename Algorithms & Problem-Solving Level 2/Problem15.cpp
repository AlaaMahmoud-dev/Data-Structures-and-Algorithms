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
void PrintNormalLetterPattern(int Number) {

	for (int i = 65; i <= Number + 65 - 1; i++)

	{
		for (int j = 1; j <= i - 65 + 1; j++)
			cout << char(i);

		cout << endl;


	}
}


int main()
{

	PrintNormalLetterPattern(ReadPositiveNumber("Plz enter Positive Number"));

}

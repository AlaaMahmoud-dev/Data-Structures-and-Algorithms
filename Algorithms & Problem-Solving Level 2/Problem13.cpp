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
void PrintNormalPattern(int Number) {

	for (int i = 1; i <= Number; i++)

	{
		for (int j = i; j >= 1; j--)
			cout << i;

		cout << endl;
	}
}


int main()
{
    
	PrintNormalPattern(ReadPositiveNumber("Plz enter Positive Number"));

}

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
void PrintInvertedPattern(int Number) {

	for (int i = Number; i >= 1; i--) 

	{
		for (int j = i; j >= 1; j--)
			cout << i;

		cout << endl;
	}
}

int main()
{
   
	PrintInvertedPattern(ReadPositiveNumber("Please enter Positive Number"));


}

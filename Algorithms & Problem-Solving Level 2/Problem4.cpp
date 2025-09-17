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

bool CheckPerfect(int Number) {

	int M = ceil(Number / 2);
	int sum = 0;
	for (int i = 1; i <= M; i++) {

		if (Number % i == 0)

			sum += i;

	}
	return sum == Number;
}

void PrintPerfectFrom1ToN(int Number) {

	cout << "Perfect Numbers From 1 " << "To " << Number << " are: " << endl;

	for (int i = 1; i <= Number; i++) {
	
		if (CheckPerfect(i))
			cout << i << endl;

	
	
	}



}



int main()
{

	PrintPerfectFrom1ToN(ReadPositiveNumber("Please enter Positive Number"));


}

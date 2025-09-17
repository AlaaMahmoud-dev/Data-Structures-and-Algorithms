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
	return sum==Number;
}
void PrintPerfectOrNot(int Number){

	if (CheckPerfect(Number))
		cout << to_string(Number) + " is Perfect Number\n";
	else
		cout << to_string(Number) + " is Not Perfect Number\n";



}


int main()
{
  
	PrintPerfectOrNot(ReadPositiveNumber("Please enter Positive Number"));


}

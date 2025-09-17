#include <iostream>
using namespace std;

enum enisPrime {NotPrime=0,Prime=1};

int ReadPositiveNumber(string Messege) {

	int Number = 0;
	do {
		cout << Messege << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;

}
enisPrime isPrime(int Number) {
	int M = round(Number / 2);
	for (int i = 2; i <= M; i++) {

		if (Number % i == 0)
			return enisPrime::NotPrime;
	}
	return enisPrime::Prime;

}
void PrintPrimefrom1toN(int Number) {

	cout << "Prime Numbers from " << 1 << " to " << Number << ":" << endl;
	cout << "----------------------------------\n";
	for (int i = 1; i <= Number; i++) {
	
	
		if (isPrime(i)==enisPrime::Prime)
			cout << i << endl;
		

	
	}


}

int main()
{
	PrintPrimefrom1toN(ReadPositiveNumber("Please enter Positive Number"));


}


#include <iostream>
#include <string>

using namespace std;
enum enRandom { SmallLetter = 1, CapitalLetter = 2, SpicialCharacter = 3, Digit = 4 };


int ReadPositiveNumber(string Messege) {

	int Number = 0;
	do {
		cout << Messege << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;

}

int RandomNumber(int from, int to) {

	int RandNum = rand() % (to - from + 1) + from;
	return RandNum;


}

char GetRandomCharacter(enRandom Rand) {

	switch (Rand) {
	case enRandom::SmallLetter:
		return (char)RandomNumber(97, 122);
	case enRandom::CapitalLetter:
		return (char)RandomNumber(65, 90);
	case enRandom::SpicialCharacter:
		return (char)RandomNumber(33, 47);
	case enRandom::Digit:
		return (char)RandomNumber(48, 57);
	}

}

string GenerateWord(enRandom charType,int Length) {

	string word = "";
	for (int i = 1; i <= Length; i++) {
	
		word += GetRandomCharacter(charType);
	
	}
	return word;

}

string GenerateKey() {

	string key = "";
	
	key = GenerateWord(enRandom::CapitalLetter, 4) + "-" +
		GenerateWord(enRandom::CapitalLetter, 4) + "-" +
		GenerateWord(enRandom::CapitalLetter, 4) + "-" +
		GenerateWord(enRandom::CapitalLetter, 4);
		

	
	return key;

}

void GenerateKeys(int Number) {



	for (int i = 1; i <= Number; i++) {

		cout << "key[" << i << "]:" << GenerateKey() << endl;
	}

}


int main()
{

	srand((unsigned)time(NULL));

	GenerateKeys(ReadPositiveNumber("Please enter positive number"));

}

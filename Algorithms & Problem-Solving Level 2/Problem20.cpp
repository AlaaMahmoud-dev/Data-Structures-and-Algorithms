#include <iostream>
#include <string>
#include <cstdlib>
enum enRandom {SmallLetter=1,CapitalLetter=2,SpicialCharacter=3,Digit=4};
using namespace std;
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

int main()
{

	srand((unsigned)time(NULL));
	cout << GetRandomCharacter(enRandom::SmallLetter) << endl;
	cout << GetRandomCharacter(enRandom::CapitalLetter) << endl;
	cout << GetRandomCharacter(enRandom::SpicialCharacter) << endl;
	cout << GetRandomCharacter(enRandom::Digit) << endl;


}

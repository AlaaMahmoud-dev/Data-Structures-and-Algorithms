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
bool isPalindrome(int num) {

	return num == ReverseNumber(num);

}



int main()
{
  
	if (isPalindrome(ReadPositiveNumber("Please enter Positive Number??")))
		cout << "Yes, it is a Palindrome Number\n";
	else
		cout << "No, it is Not a Palindrome Number\n";


}

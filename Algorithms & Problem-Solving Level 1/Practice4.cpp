#include <iostream>
using namespace std;
enum enEvenOrOddOrAll {Even,Odd,All};

int ReadAge() {

	int Age = 0;
	cout << "Please Enter  Age Between 18_45\n";
	cin >> Age;
	return Age;

}
bool ValidatNumberInRange(int Number,int from,int to) {

	 
	return (Number >= from && Number <= to);


}
int ReadUntilAgeBetween(int from, int to) {
	int Age = 0;
	do {

		Age = ReadAge();

	} while (!ValidatNumberInRange(Age, from, to));
	return Age;
}
void PrintResult(int Age) {

	cout << "Your Age is " << Age << endl;


}

int ReadNumber() {

	int Number = 0;
	cout << "Please enter Number\n";
	cin >> Number;
	return Number;

}
void PrintResult1_Nforloop(int Number) {
	cout << "Range Using for loop\n";

	for (int i = 1; i <= Number;i++) {
	
		cout << i << endl;
	
	
	}


}
void PrintResult1_NWhileloop(int Number) {

	int i = 1;
	cout << "Range Using  While loop\n";

	while (i <= Number) {
	
		cout << i << endl;
		i++;
	
	}


}
void PrintResult1_NDoWhileLoop(int Number) {

	int i = 1;
	cout << "Range Using Do While loop\n";

	do {
	
		cout << i << endl;
		i++;
	
	} while (i <= Number);

}

void PrintResultN_1forloop(int Number) {
	cout << "Range Using for loop\n";

	for (int i = Number; i >= 1; i--) {

		cout << i << endl;


	}


}
void PrintResultN_1Whileloop(int Number) {

	int i = Number;
	cout << "Range Using  While loop\n";

	while (i >= 1) {

		cout << i << endl;
		i--;

	}


}
void PrintResultN_1DoWhileLoop(int Number) {

	int i = Number;
	cout << "Range Using Do While loop\n";
	do {

		cout << i << endl;
		i--;

	} while (i >= 1);

}

enEvenOrOddOrAll CheckEvenOrOdd(int count) {

	if (count % 2 == 0)
		return enEvenOrOddOrAll::Even;
	else if (count % 2 != 0)  
		return enEvenOrOddOrAll::Odd;
	


}
int SumOdd1_N(int N) {

	int sum = 0;
	for (int i = 1; i <= N; i ++) {
	if(CheckEvenOrOdd(i)==enEvenOrOddOrAll::Odd)
		sum += i;
	
	}

	return sum;
}
void PrintSumOdd1_N(int sum) {

	cout << "sum=" << sum << endl;

}

int SumEvenOrOddOrAll1_N(int N,enEvenOrOddOrAll Type) {
	int sum = 0;
	if (Type == enEvenOrOddOrAll::Even)
		for (int i = 0; i <= N; i += 2)
			sum += i;
	else if(Type == enEvenOrOddOrAll::Odd)
		for (int i = 1; i <= N; i += 2)
			sum += i;
	else
		for (int i = 1; i <= N; i ++)
			sum += i;
	return sum;
}

int ReadPositiveNumber(string Messege) {

	int Number = 0;
	do {
		cout << Messege << endl;
		cin >> Number;
	
	} while (Number<0);

	return Number;
}
int CalculateFactorial(int N) {

	int Fact = 1;
	for (int i = N; i >= 1;i--) {
	
		Fact *= i;
	
	}
	return Fact;
}
int main()
{
	//problem 24+25
	//PrintResult(ReadUntilAgeBetween(18,45));

	//problem 26
	//int N = ReadNumber();
	/*PrintResult1_Nforloop(N);
	PrintResult1_NWhileloop(N);
	PrintResult1_NDoWhileLoop(N);*/
	//problem 27
	/*PrintResultN_1forloop(N);
	PrintResultN_1Whileloop(N);
	PrintResultN_1DoWhileLoop(N);*/
	//problem 28
	//PrintSumOdd1_N(SumOdd1_N(N));

	//سؤال اضافي بجمع حسب الطلب فردي او زوجي او كله
	//PrintSumOdd1_N(SumEvenOrOddOrAll1_N(N, enEvenOrOddOrAll::All));

	//Problem 29 sum even numbers

	//Problem 30
	cout << "Factorial is " << CalculateFactorial(ReadPositiveNumber("Enter Positive Number ?")) << endl;
}


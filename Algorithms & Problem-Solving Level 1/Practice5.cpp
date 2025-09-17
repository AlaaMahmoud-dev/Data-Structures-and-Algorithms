#include <iostream>
using namespace std;
struct stPiggy {

	int Pinnies;
	int nickles;
	int Dimes;
	int Quarters;
	int Dollars;


};

int ReadNumber() {

	int Number = 0;
	cout << "Please enter number\n";
	cin >> Number;
	return Number;

}
void Powerof234(int N[],int Number) {

	N[0] = Number * Number;
	N[1] = Number * Number * Number;
	N[2] = Number * Number * Number * Number;



}
void PrintResult(int N[], int Number) {
	Powerof234(N, Number);
	cout << Number << " Power of 2=" << N[0] << endl;
	cout << Number << " Power of 3=" << N[1] << endl;
	cout << Number << " Power of 4=" << N[2] << endl;


}

int ReadPower() {

	int Power=0;
	
	cout << "Please enter power\n";
	cin >> Power;

	return Power;

}
int PrintResult1(int N,int M) {
	int pow = 1;
	for (int i = 1; i <= M; i++) {
	
		pow *= N;
	
	
	}
	
	return pow;
}

int ReadNumberInRange(int from,int to) {

	int Grade = 0;

	do {
		cout << "Please enter Grade\n";
		cin >> Grade;
	} while (Grade > to || Grade < from);

	return Grade;


}
char CheckGrade(int Grade) {

	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C'; 
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else 
		return 'F';

}
void PrintGradeResult(int Grade) {

	cout << CheckGrade(Grade) << endl;

}

float ReadTotalSales() {

	float TotalSales = 0;
	
		cout << "Please enter Total Sales\n";
		cin >> TotalSales;
	
	return TotalSales;

}
float GetCommesion(float TotalSales) {

	float Commesion = 0;
	if (TotalSales == 1000000)
		Commesion =  0.01;
	else if (TotalSales >= 500000)
		Commesion =  0.02;
	else if (TotalSales >= 100000)
		Commesion =  0.03;
	else if (TotalSales >= 50000)
		Commesion =  0.05;
	else
		Commesion = 0.0;
	return Commesion;

}
float CalculateTotalcommesion(float TotalSales) {

	return GetCommesion(TotalSales)*TotalSales;

}

stPiggy ReadPiggy() {

	stPiggy P = {};
	cout << "Please enter sum of Pinnies\n";
	cin >> P.Pinnies;
	cout << "Please enter sum of nickles\n";
	cin >> P.nickles;
	cout << "Please enter sum of Dimes\n";
	cin >> P.Dimes;
	cout << "Please enter sum of Quarters\n";
	cin >> P.Quarters;
	cout << "Please enter sum of Dollars\n";
	cin >> P.Dollars;
	return P;

}
stPiggy ConvartToPinnies(stPiggy P) {

	P.nickles = 5 * P.Pinnies;
	P.Dimes = 10 * P.Pinnies;
	P.Quarters = 25 * P.Pinnies;
	P.Dollars = 100 * P.Pinnies;
	return P;

}
float GetTotalOfPinnies(stPiggy P) {

	float TotalPinnies = P.Pinnies + P.nickles + P.Dimes + P.Quarters + P.Dollars;
	return TotalPinnies;
}

int main()
{
	//Problem 31
	//int arr[3];
	//int N = ReadNumber();
	//PrintResult(arr, N);
	//Problem 32
	//cout<<PrintResult1(ReadNumber(), ReadPower());
		//Problem 33
	//PrintGradeResult(ReadNumberInRange(0,100));

	//Problem 34
	/*float TotalSales = ReadTotalSales();
	cout << "\nCommesion Percentage is " << GetCommesion(TotalSales) << endl << endl;
	cout << "Total Commesion is " << CalculateTotalcommesion(TotalSales) << endl;*/

	//Problem 35
	stPiggy P = ReadPiggy();
	float TotalPinnies = GetTotalOfPinnies(ConvartToPinnies(P));
	cout << "Total of Pinnies is: " << TotalPinnies << endl;
	cout << "Total Dollars is: " << TotalPinnies / 100 << endl;

	}

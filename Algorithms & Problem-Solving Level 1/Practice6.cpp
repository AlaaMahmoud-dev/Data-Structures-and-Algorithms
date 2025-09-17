#include <iostream>
#include <string>

using namespace std;
enum enisPrime {NotPrime,Prime};
enum enDayOfWeek {Sunday=1,Monday=2,Tuseday=3,Wednsday=4,Thursday=5,Friday=6,Saturday=7};
enum enMonthOfYear {January=1,February=2,March=3,April=4,may=5,June=6,July=7,August=8,September=9,October=10,November=11,December=12};
struct stSimpleCalculater {


	float Num1, Num2;
	char Opr;


};
struct stTaskDuration {

	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;



};

stSimpleCalculater ReadCalculater() {


	stSimpleCalculater SC;
	cout << "Please enter Number1\n";
	cin >> SC.Num1;
	cout << "Please enter Number2\n";
	cin >> SC.Num2;
	cout << "Please enter operation Type\n";
	cin >> SC.Opr;
	return SC;


}
float Calculater(stSimpleCalculater SC) {

	if (SC.Opr == '+')
		return SC.Num1 + SC.Num2;
	else if (SC.Opr == '-')
		return SC.Num1 - SC.Num2;
	else if (SC.Opr == '*')
		return SC.Num1 * SC.Num2;
	else
		if (SC.Num2 == 0 && SC.Num1 != 0)
			return 0;
		else
		return SC.Num1 / SC.Num2;
}
void PrintCalculater(stSimpleCalculater SC) {

	if (Calculater(SC) == 0)
		cout << "Undefind Value\n";
	else
		cout << SC.Num1 << SC.Opr << SC.Num2 << "=" << Calculater(SC) << endl;

	


}

float ReadUntil99() {

	float Number = 0, sum = 0;
	int counter = 1;
	
		do {

			cout << "Please enter Number " + to_string(counter) << endl;
			cin >> Number;
			if (Number == -99)
				break;
			sum += Number;
			counter++;
		}
		while (Number != -99);

		return sum;

}

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
	
		if (M % i == 0)
			return enisPrime::NotPrime;
	}
	return enisPrime::Prime;

}
void PrintResult(enisPrime isPrime) {

	if (isPrime== enisPrime::Prime)
		cout << "Prime Number\n";
	else
		cout << "Not Prime Number\n";
}

int Remainder(int Bill,int Cash) {
	
	int Remainder = Cash - Bill;
	return Remainder;


}

float CalculatToatalBill(float Bill) {

	
	return Bill * 1.1 * 1.16;

}

float CalculateNumberOfDays(float NumberOfHours) {

	return NumberOfHours / 24;


}
float CalculateNumberOfWeeks(float NumberOfDays) {

	return NumberOfDays / 7;


}

stTaskDuration ReadTaskDuration() {

	stTaskDuration TaskDuration;
	TaskDuration.NumberOfDays = ReadPositiveNumber("Please enter Number of Days");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter Number of Hours");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please enter Number of Minutes");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please enter Number of Seconds");
	return TaskDuration;


}
int TaskDuratioInSeconds(stTaskDuration TaskDuration) {
	int DurationInSeconds = 0;
	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds+= TaskDuration.NumberOfHours  * 60 * 60;
	DurationInSeconds+= TaskDuration.NumberOfMinutes * 60 ;
	DurationInSeconds += TaskDuration.NumberOfSeconds;

	return DurationInSeconds;

}

stTaskDuration TaskDurationFromSeconds(int TotalOfSeconds) {


	stTaskDuration TaskDuration;
	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinute = 60;

	int Remainder = 0;

	TaskDuration.NumberOfDays = TotalOfSeconds / SecondsPerDay;
	Remainder = TotalOfSeconds % SecondsPerDay;

	TaskDuration.NumberOfHours = Remainder / SecondsPerHour;
	Remainder = Remainder % SecondsPerHour;

	TaskDuration.NumberOfMinutes = Remainder / SecondsPerMinute;
	Remainder = Remainder % SecondsPerMinute;

	TaskDuration.NumberOfSeconds = Remainder ;

	 return TaskDuration;

}
void PrintTaskDuration(stTaskDuration TaskDuration) {

	

	cout << TaskDuration.NumberOfDays << ":" << TaskDuration.NumberOfHours << ":" << TaskDuration.NumberOfMinutes << ":" << TaskDuration.NumberOfSeconds << endl;

}

int ReadNumberInRange(string messege,int from,int to) {

	int Number = 0;
	cout << messege << endl << endl;
	do {
	
		cout << "Please enter Number Between " << from << " and " << to << endl;
		cin >> Number;
	
	} while (Number<from || Number>to);

	return Number;
}
string CheckDayOfWeek(int Number) {

	enDayOfWeek DayOfWeek = enDayOfWeek(Number);
	switch (DayOfWeek) {
	case enDayOfWeek::Sunday:
		return "Today is Sunday";
	case enDayOfWeek::Monday:
		return "Today is Monday";
	case enDayOfWeek::Tuseday:
		return "Today is Tuseday";
	case enDayOfWeek::Wednsday:
		return "Today is Wednsday";
	case enDayOfWeek::Thursday:
		return "Today is Thursday";
	case enDayOfWeek::Friday:
		return "Today is Friday";
	case enDayOfWeek::Saturday:
		return "Today is Saturday";
	default:
		return "Not Valid Number";
	
	}

}

string CheckMonthOfYear(int Number){

	enMonthOfYear MonthOfYear = enMonthOfYear(Number);
	switch (MonthOfYear) {
	case enMonthOfYear::January:
		return "Month is January";
	case enMonthOfYear::February:
		return "Month is February";
	case enMonthOfYear::March:
		return "Month is March";
	case enMonthOfYear::April:
		return "Month is April";
	case enMonthOfYear::may:
		return "Month is May";
	case enMonthOfYear::June:
		return "Month is June";
	case enMonthOfYear::July:
		return "Month is July";
	case enMonthOfYear::August:
		return "Month is August";
	case enMonthOfYear::September:
		return "Month is September";
	case enMonthOfYear::October:
		return "Month is October";
	case enMonthOfYear::November:
		return "Month is November";
	case enMonthOfYear::December:
		return "Month is December";
	default:
		return "Not Valid Number";

	}

}

void PrintLettersA_Z() {


	for (int i = 65; i <= 90; i++) {
	
	
		cout << char(i) << endl;
	
	}


}
float MonthsLoan(float LoanAmount, float MonthlyPaymen) {


	return LoanAmount / MonthlyPaymen;
	 
	



}

float MonthlyPayment(float LoanAmount, float MonthsLoan) {


	return LoanAmount / MonthsLoan;





}

string ReadPin() {


	string PIN = " ";
	cout << "Enter PIN Code\n";
	cin >> PIN;
	return PIN;


}
bool Login() {

	string PIN;
	int count = 3;
	do {
		
		 count--;
		 PIN = ReadPin();

		if (PIN == "1234")
			return 1;
		
		else {
		
			system("color 4F");
			cout << "\nWrong PIN, You Have "<<count<<" Times To Try\n";
			
		}



	} while (PIN != "1234" && count >= 1);
	return 0;
}

int main()
{
	//Problem 36          في حل للاستاذ محمد باستخدام اينام و ري يوز فنكشن طريقة احترافية
	//PrintCalculater(ReadCalculater());
	//Problem 37  
	//cout << "Sum=" << ReadUntil99() << endl;
	//Problem 38 
	int Number = ReadPositiveNumber("Please enter Number");
	PrintResult(isPrime(Number));
	//Problem 39
	/*int TotalBill = ReadPositiveNumber("Please enter Total Bill");
	int CashPaid = ReadPositiveNumber("Please enter Cash Paid");
	cout << "Remainder is: " << Remainder(TotalBill, CashPaid) << endl;*/
	//Problem 40
	/*float BillValue = ReadPositiveNumber("Please enter Bill Value");
	cout << "Toatal Bill =" << CalculatToatalBill(BillValue) << endl;*/
	//Problem 41
	/*float NumberOfHours = ReadPositiveNumber("Please enter Number of Hours");
	float NumberOfDays = CalculateNumberOfDays(NumberOfHours);
	float NumberOfWeeks = CalculateNumberOfWeeks(NumberOfDays);

	cout << "Number of Hours=" << NumberOfHours << endl;
	cout << "Number of days=" << NumberOfDays << endl;
	cout << "Number of Weeks=" << NumberOfWeeks << endl;*/
	
	//Problem 42
	//cout << "Total of Seconds=" << TaskDuratioInSeconds(ReadTaskDuration()) << endl;
	
	//Problem 43
	/*int TotalOfSeconds = ReadPositiveNumber("Plaese eneter Total Of Seconds");

	PrintTaskDuration(TaskDurationFromSeconds(TotalOfSeconds));*/
	//Problem 44
	//cout << CheckDayOfWeek(ReadNumberInRange("(Sunday=1,Monday=2,Tuseday=3,Wedensday=4,Thursday=5,Friday=6,Saturday=7)", 1, 7)) << endl;
	//Problem 45
	//cout << CheckMonthOfYear(ReadNumberInRange("(January=1,February=2,March=3,April=4,may=5,June=6,July=7,August=8,September=9,October=10,November=11,December=12)", 1, 12)) << endl;
	//Problem 46
	//PrintLettersA_Z();
    //Problem 47
	/*float LoanAmount = ReadPositiveNumber("Please enter Loan Amount");
	float MonthlyPaymen = ReadPositiveNumber("Please enter Monthly payment");
	cout << "Months Requierd To Settle The Loan:" << MonthsLoan(LoanAmount, MonthlyPaymen) << endl;*/
	//Problem 48
	/*float LoanAmount= ReadPositiveNumber("Please enter Loan Amount");
	float MonthsLoan= ReadPositiveNumber("Please enter Total of Months To Settle The Loan");
	cout << "Your Monthly Payment is: " << MonthlyPayment(LoanAmount, MonthsLoan) << endl;*/
	//Problem 49+50
	/*if (Login()) 
	{
		system("color 2F");
		cout << "\nYour Balance is: " << 7500 << endl;
	}
	else

		cout << "Your Card is Locked, Call Bank To Help\n";
	*/
	

}


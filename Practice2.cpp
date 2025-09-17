
#include <iostream>
#include <cmath>

using namespace std;

struct FullName {


	string FirstName, LastName;





};
enum enPassFail {fail,pass};
struct st3Numbers {

	int num1, num2, num3;


};
struct stMarks {

	float Mark1, Mark2, Mark3;


};

FullName ReadFullName() {
	FullName Name;
	cout << "Please enter First Name\n";
	cin >> Name.FirstName;

	cout << "Please enter last name\n";
	cin >> Name.LastName;

	return Name;
}
string GetFullName(FullName name, bool Reversed) {

	string FullName = "";

	if (Reversed)
		FullName = name.LastName + " " + name.FirstName;
	else
		FullName = name.FirstName + " " + name.LastName;

	return FullName;


}
void PrintFullName(string fullname) {

	cout << "Full Name is: " << fullname << endl;

}

float ReadNumber() {

	float number;
	cout << "Enter number\n";
	cin >> number;
	return number;

}
float GetHalf(float num) {

	return num / 2;

}
void PrintHalfNumber(float num) {

	cout << "Half of " <<num<<" is "<< GetHalf(num) << endl;

}

float ReadMark() {

	float Mark;
	cout << "Please enter mark\n";
	cin >> Mark;
	return Mark;

}
enPassFail GetResult(float Mark) {

	if (Mark >= 50)
		return enPassFail::pass;
	else
		return enPassFail::fail;



}
void PrintResult(float Mark) {

	if (GetResult(Mark) == enPassFail::pass)
		cout << "You Passed\n";
	else
		cout << "You Failed\n";

}

st3Numbers Read3Numbers() {

	st3Numbers Numbers;
	cout << "Please enter first number\n";
	cin >> Numbers.num1;
	cout << "Please enter second number\n";
	cin >> Numbers.num2;
	cout << "Please enter Third number\n";
	cin >> Numbers.num3;
	return Numbers;

}
int Sum3Numbers(st3Numbers numbers) {

	int sum = 0;
	sum = numbers.num1 + numbers.num2 + numbers.num3;
	return sum;


}
void PrintSum(st3Numbers numbers) {

	cout << "Sum=" << Sum3Numbers(numbers) << endl;

}

stMarks ReadMarks() {
	stMarks Marks;
	cout << "Enter mark1\n";
	cin >> Marks.Mark1;

	cout << "Enter Mark2\n";
	cin >> Marks.Mark2; 

	cout << "Enter mark3\n";
	cin >> Marks.Mark3;
	return Marks;

}
float Sum3Marks(stMarks Marks) {

	int sum = 0;
	sum = Marks.Mark1 + Marks.Mark2 + Marks.Mark3;
	return sum;


}
float CalculateAverage(stMarks Marks) {

	float Avg=0;
	Avg = Sum3Marks(Marks) / 3;
		return Avg;

}
void PringAvg(stMarks Marks) {

	cout << "Average is: " << CalculateAverage(Marks) << endl;

}
enPassFail CheckResults(stMarks Marks) {

	if (CalculateAverage(Marks) >= 50)
		return enPassFail::pass;
	else
		return enPassFail::fail;


}
void PrintResults(stMarks Marks) {

	PringAvg(Marks);

	if (CheckResults(Marks) ==enPassFail::fail)
		cout << "Fail\n";
	else
		cout << "Pass\n";


}

void Read2Numbers(int &num1,int &num2) {

	cout << "Enter first number\n";
	cin >> num1;
	cout << "Enter second number\n";
	cin >> num2;


}
int CheckMaxOf2Numbers(int num1,int num2) {

	if (num1 > num2)
		return num1;
	else
		return num2;



}

void PrintMax(int Max) {

	cout << "Max is: " << Max << endl;


}
int CheckMaxOf3Numbers(st3Numbers number) {
	int Max = 0;
	if (number.num1 > number.num2)
		Max = number.num1;
	else 
		Max = number.num2;
	if (Max > number.num3)
		Max = Max;
	else
		Max = number.num3;
	return Max;

	/*another way
	if (number.num1 > number.num2)
		if (number.num1 > number.num3)
			return number.num1;
		else
			return number.num3;
	else
		if (number.num2 > number.num3)
			return number.num2;
		else
			return number.num3;*/
}

void Read2Number(int arr[2]) {

	cout << "Enter first number\n";
	cin >> arr[0];
	cout << "Enter second number\n";
	cin >> arr[1];


}
void Swap2Numbers(int arr[2]) {

	int Temp = 0;
	Temp = arr[0];
	arr[0] = arr[1];
	arr[1] = Temp;
	

}
void PrintSwap(int arr[2]) {

	cout << "Number1 After Swapping is " << arr[0] << endl;
	cout << "Number2 After Swapping is " << arr[1] << endl;



}

void ReadRectangle(float& Length, float& Wiedth) {

	cout << "Enter The Length of rectangle\n";
	cin >> Length;
	cout << "Enter Wiedth of rectangle\n";
	cin >> Wiedth;


}
float CalculaAreaOfRectangle(float Length, float Wiedth) {

	float Area = Length * Wiedth;
	return Area;


}
void PrintAreaOfRectangle(float Length, float Wiedth) {

	cout << "The Area of rectangle is: " << (CalculaAreaOfRectangle(Length, Wiedth)) << endl;

}

void ReadReactangle1(float &Side,float &Diagonal) {

	cout << "Enter The Side of rectangle\n";
	cin >> Side;
	cout << "Enter the Diagonal of rectangle\n";
	cin >> Diagonal;


}
float CalculaAreaOfRectangle1(float Side, float Diagonal) {

	float Area = 0;
	Area = Side * (sqrt(pow(Diagonal, 2) - pow(Side, 2)));
	return Area;


}
void PrintAreaOfRectangle1(float Area) {

	cout << "The Area of rectangle is: " << Area << endl;

}

void ReadTriangle(float& Base, float& Hieght) {

	cout << "Please enter The Base of triangle\n";
	cin >> Base;
	cout << "Please enter the hieght of Triangle\n";
	cin >> Hieght;

}
float CalculateAreaOfTriangle(float Base, float Hieght) {

	float Area = Base / 2 * Hieght;
	return Area;

}
void PrintAreaOfTriangle(float area) {

	cout << "The Area of triangle is: " << area << endl;



}
int main()
{
	//PrintFullName(GetFullName(ReadFullName(), true));//problem 6
	//PrintHalfNumber(ReadNumber());//problem 7
	//PrintResult(ReadMark());//problem 8
	//PrintSum(Read3Numbers());//problem 9
	//PringAvg(ReadMarks());//problem 10
	//PrintResults(ReadMarks());//problem 11
	//problem 12
	//int num1=0, num2=0;
	//PrintMax(CheckMaxOf2Numbers(num1,num2));
	//PrintMax(CheckMaxOf3Numbers(Read3Numbers()));//problem 13
	//Problem 14
	/*int arr[2];
	Read2Number(arr);
	cout << "Number1 Before swapping is " << arr[0] << endl;
	cout << "Number2 Before swapping is " << arr[1] << endl;
	Swap2Numbers(arr);
	PrintSwap(arr);*/
	//Problem 15
	float Length = 0, Wiedth = 0;
	/*ReadRectangle(Length, Wiedth);
	PrintAreaOfRectangle(Length, Wiedth);*/
	//Problem 16
	/*Length = 0;
	Wiedth = 0;
	ReadReactangle1(Length, Wiedth);
	PrintAreaOfRectangle1(CalculaAreaOfRectangle1(Length, Wiedth));*/
	//Problem 17
	Length = 0;
	Wiedth = 0;
	ReadTriangle(Length, Wiedth);
	PrintAreaOfTriangle(CalculateAreaOfTriangle(Length, Wiedth));
	///ملاحظة انه المهندس حل مشكلة 9 و 10 بطريقة مش افضل اشي(الطريقة تبعتي المفروض انها افضل) مشان نراجع الكول باي ريفيرنس
}


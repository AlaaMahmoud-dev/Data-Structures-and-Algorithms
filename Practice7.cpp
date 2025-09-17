#include <iostream>
#include <cmath>

using namespace std;

float ReadRedius() {
	float Radius=0;
	cout << "Please enter Radius\n";
	cin >> Radius;
	return Radius;

}
float CalculateAreaOfCircle(float Radius) {
	const float PI = 3.141592653589793238;
	float Area = 0;
	Area = PI * pow(Radius, 2);
	return Area;

}
void PrintAreaOfCircle(float Area) {

	cout << "The Area of circle is: " << Area << endl;


}

float ReadDiameter() {

	float Diameter = 0;
	cout << "Please enter Diameter\n";
	cin >> Diameter;
	return Diameter;

}
float CalculateAreaOfCircleByDiameter(float Diameter) {
	const float PI= 3.141592653589793238;
	float Area = (PI * pow(Diameter, 2)) / 4;
	return Area;

}

float ReadLength() {

	float Length = 0;
	cout << "Please enter the length os square to calculate circle area\n";
	cin >> Length;
	return Length;


}
float CalculateCircleAreaInscripedInSquare(float Length) {

	const float PI = 3.141592653589793238;

	float Area = (PI * pow(Length, 2)) / 4;
	return Area;


}

float ReadCircumferenceOfCircle() {

	float Circumference = 0;
	cout << "Please enter the Circumference of circle\n";
	cin >> Circumference;
	return  Circumference;
}
float CalculateAreaOfCircleAlongCircumference(float circum) {

	const float PI = 3.141592653589793238;
	float Area = pow(circum, 2) / (4 * PI);
	return Area;


}


void ReadSideAndBaseOfTriangle(float &Side,float &Base) {

	
	cout << "Please enter the One Side of The Isosceles Triangle\n";
	cin >> Side;
	cout << "Please enter the Base of The Isosceles Triangle\n";
	cin >> Base;

}
float CalculateCircleAreaInscripedInIsoscelesTriangle(float Side, float Base) {

	const float PI = 3.141592653589793238;

	float Area = PI *( pow(Base, 2) / 4)*((2* Side - Base)/(2* Side + Base));
	return Area;


}

void ReadArbitraryTriangleSides(float& a,float& b,float& c) {

	cout << "Please Enter First Side of Triangle a\n";
	cin >> a;

	cout << "Please enter base of Triangle\n";
	cin >> b;

	cout << "Please Enter Second Side of Triangle a\n";
	cin >> c;


}
float CircleAreaByArbiraryTriangle(float a, float b, float c) {

	const float PI = 3.141592653589793238;
	float p = (a + b + c) / 2;
	float Equation = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
	float Area = PI * pow(Equation, 2);

	return Area;

}
int main()
{


	
	
	//PrintAreaOfCircle(CalculateAreaOfCircle(ReadRedius()));//Problem 18
	//PrintAreaOfCircle(CalculateAreaOfCircleByDiameter(ReadDiameter()));//Problem 19
	//PrintAreaOfCircle(CalculateCircleAreaInscripedInSquare(ReadLength()));//Problem 20
	//PrintAreaOfCircle(CalculateAreaOfCircleAlongCircumference(ReadCircumferenceOfCircle()));//Problem 21
	
	//Problem 22
	/*float Side = 0, Base = 0;
	ReadSideAndBaseOfTriangle(Side,Base);
	PrintAreaOfCircle(CalculateCircleAreaInscripedInIsoscelesTriangle(Side, Base));*/
	//Problem 23
	float a = 0, b = 0, c = 0;
	ReadArbitraryTriangleSides(a, b, c);
	PrintAreaOfCircle(CircleAreaByArbiraryTriangle(a, b, c));
}

#include <iostream>
#include <string>

using namespace std;


enum enCkeckNumberType {odd=1,even=2};
struct stHired {

    short Age;
    bool DriverLicense,HasRecommendation;


};

void PrintName(string Name) {

    cout << "Your Name is: " << Name << endl;

}
string ReadName() {
    string Name;
    cout << "Plz enter your Name\n";
    getline(cin, Name);
    return Name;
}


int ReadNumber() {
    int number;
    cout << "Please enter number\n";
    cin >> number;
    return number;


}
enCkeckNumberType CheckNumberType(int number) {
  int Result = number % 2;
    if (Result == 0)
        return enCkeckNumberType::even;
    else
        return enCkeckNumberType::odd;


}
void PrintNumberType(enCkeckNumberType NumberType) {

    if(NumberType== enCkeckNumberType::even)

        cout << "Number is: " << "Even" << endl;

    else

        cout << "Number is: " << "Odd" << endl;

}

stHired ReadHired() {
    stHired Info;
    cout << "Please enter Age\n";
    cin >> Info.Age;

    cout << "Please enter 1 if has a driver license or 0 if not\n";
    cin >> Info.DriverLicense;

    cout << "Please enter 1 if has a recommendation or 0 if not\n";
    cin >> Info.HasRecommendation;


    return Info;

}
bool IsHired(stHired Info) {

    if (Info.HasRecommendation)
        return true;
    else
        return (Info.Age >= 21 && Info.DriverLicense);


}
void PrintHired(stHired Info) {

    if  (IsHired(Info))
        cout << "HIRED\n";
    else
        cout << "REJECT\n";

}

int main()
{
    
    PrintName("Alaa");//Problem1
    PrintName(ReadName());//Problem2
    PrintNumberType(CheckNumberType(ReadNumber()));//Problem3

    //Problem 4 + 5
    PrintHired(ReadHired());
}


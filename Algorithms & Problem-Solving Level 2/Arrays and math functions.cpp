#include <iostream>
using namespace std;

enum enRandom { SmallLetter = 1, CapitalLetter = 2, SpicialCharacter = 3, Digit = 4 };
enum enPrimeOrNotPrime { Prime = 1, NotPrime = 2 };
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


int ReadPositiveNumber(string Messege) {

    int Number = 0;
    do {
        cout << Messege << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;

}

float ReadNumber() {
    float Number=0;
    cout << "Please enter Number\n";
    cin >> Number;
    return Number;

}

void FillArr(int arr[],int & arrLength) {
    cout << "Please enter Number of Elements\n";
    cin >> arrLength;

    cout << "Please enter Array elements\n";

    for (int i = 0; i < arrLength;i++) {
    
        cout << "Element[" << i + 1 << "] :";
        cin >> arr[i];
        cout << endl;
    
    
    }


}

int ArrayElementFrequency(int arr[],int arrLength, short Element) {
	
	int FreqCount = 0;

	for (int i = 0; i < arrLength; i++) {
	
		if (arr[i] == Element)
			FreqCount++;
	}

	return FreqCount;

}

void PrintArr(int arr[], int arrLength) {

   
    for (int i = 0; i < arrLength; i++) {
    
      
        cout << arr[i] << " ";
    
    
    }
    cout << "\n\n";


}

void FillArrRandomNumbers(int arr[], int& arrLength) {
    cout << "Please enter Number of Elements\n";
    cin >> arrLength;

   

    for (int i = 0; i < arrLength; i++) {

        
        arr[i]= RandomNumber(-100,100);


    }


}

int GetMaxNumberInArray(int arr[], int arrLength) {
    int Max = arr[0];
    for (int i = 1; i < arrLength; i++) {
    
    
        if (arr[i] > Max)
            Max = arr[i];
    
    
    }

    return Max;
}

int GetMinNumberInArray(int arr[], int arrLength) {
    int Min = arr[0];
    for (int i = 1; i < arrLength; i++) {


        if (arr[i] <  Min)
            Min = arr[i];


    }

    return Min;
}

int GetSumArray(int arr[], int arrLength) {

    int sum = 0;
    for (int i = 0; i < arrLength;i++) {
    
        sum += arr[i];
    
    
    }
    return sum;


}

float GetAvgArray(int arr[], int arrLength) {


    return (float)GetSumArray(arr, arrLength) / arrLength;


}

void arrCopy(int arrSource[],int arrDistination[], int arrLength) {

    for (int i = 0; i < arrLength; i++) {
    
        arrDistination[i] = arrSource[i];
    
    
    }



}

enPrimeOrNotPrime isPrime(int Number) {
    int M = round(Number / 2);
    for (int i = 2; i <= M; i++) {

        if (Number % i == 0)
            return enPrimeOrNotPrime::NotPrime;
    }
    return enPrimeOrNotPrime::Prime;

}


void arrCopyPrime(int arrSource[], int arrDistination[], int arrLength, int &arr2Length) {
    int count = 0;
    for (int i = 0; i < arrLength; i++) {

        if (isPrime(arrSource[i]) == enPrimeOrNotPrime::Prime) {
            arrDistination[count] = arrSource[i];
            count++;
        }

    }


    arr2Length = count;
}

void SumOfTowArrays(int arr1[], int arr2[], int arr3[],int arrLength) {

  
    for (int i = 0; i < arrLength; i++) {
    
        arr3[i] = arr1[i] + arr2[i];
    
    
    }



}

void FillArrayInOrder(int arr[],int &arrLength) {

    for (int i = 0; i < arrLength; i++) {
    
    
        arr[i] = i + 1;
    
    
    }



}

void Swap(int& A,int& B) {

    int Temp = 0;
    Temp = A;
    A = B;
    B = Temp;


}

void ArrayShuffle(int arr[], int arrLength) {
    
    
   
    for (int i = 0; i < arrLength; i++) {
    
    
        Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
    
    
    }


}

void CopyArrayInReversed(int arrSource[],int arrDistination[], int arrLength) {

    for (int i = 1; i <= arrLength; i++) {
    
    
        arrDistination[arrLength - i] = arrSource[i - 1];
    
    }



}


string GenerateWord(enRandom charType, int Length) {

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

void GenerateArrayOfKeys(string arr[],int arrLength) {



    for (int i = 0; i < arrLength; i++) {
        arr[i] = GenerateKey();
        cout << "Array[" << i << "]:" << arr[i] << endl;
    }

}

void PrintArrayString(string arr[], int arrLength) {



    for (int i = 0; i < arrLength; i++) {
        
        cout << "Array[" << i << "]:" << arr[i] << endl;

    }


}

int SerchNumberInArray(int arr[],int arrLength,int Number) {

   

    for (int i = 0; i < arrLength; i++) {
    
    
        if (arr[i] == Number)
            return i;
    
    }

    return -1;
}

bool isNumberInArray(int Number,int arr[], int arrLength) {

    return(SerchNumberInArray(arr, arrLength, Number) != -1);

}

void AddArrayElement(int Number ,int arr[], int& arrLength) {

    arrLength++;
    arr[arrLength - 1] = Number;


}

void InputUserNumbersInArray(int arr[],int &arrLength) {

    bool AddNum = true;
    
    do {
        AddArrayElement(ReadPositiveNumber("Please enter a number"), arr, arrLength);

        cout << "Do you want to add more numbers [0]No? [1]yes?";
        cin >> AddNum;
    
    } while (AddNum);
    
    
}

void CopyArrayUsingAddArrElement(int arrSource[], int arrDistination[], int arrLength,int &arrDistinationLength) {

    for (int i = 0; i < arrLength; i++) {

        AddArrayElement(arrSource[i],arrDistination, arrDistinationLength);


    }



}

void CopyOddNumberUsingAddArrElement(int arrSource[], int arrDistination[], int arrLength, int& arrDistinationLength) {

    for (int i = 0; i < arrLength; i++) {

        if (arrSource[i] % 2 != 0) 
            AddArrayElement(arrSource[i], arrDistination, arrDistinationLength);


    }



}

void CopyPrimeNumberUsingAddArrElement(int arrSource[], int arrDistination[], int arrLength, int& arr2Length) {
    
    for (int i = 0; i < arrLength; i++) {

        if (isPrime(arrSource[i]) == enPrimeOrNotPrime::Prime) {
            
            AddArrayElement(arrSource[i], arrDistination, arr2Length);
        }

    }


   
}

void CopyDistinctNumbersToArray(int arrSource[], int arrDistination[], int arrLength, int& arr2Length) {

    

    for (int i = 1; i < arrLength; i++) {
        if (!isNumberInArray(arrSource[i], arrDistination, arr2Length))
            AddArrayElement(arrSource[i], arrDistination, arr2Length);
    }



}

bool isPalindromArray(int arr[],int arrLength) {

    for (int i = 0; i <= arrLength; i++) {
    
    
        if (arr[arrLength - 1 - i] != arr[i])
            return false;
    
    
    }
    return true;

}

int CountOddNumbersInArray(int arr[], int arrLength) {

    int CountOdd=0;
    for (int i = 0; i < arrLength; i++)
        if (arr[i] % 2 != 0)
            CountOdd++;
    return CountOdd;

}

int CountEvenNumbersInArray(int arr[], int arrLength) {

    int CountEven = 0;
    for (int i = 0; i < arrLength; i++)
        if (arr[i] % 2 == 0)
            CountEven++;
    return CountEven;



}

int CountPositiveNumbersInArray(int arr[], int arrLength) {

    int CountPositive = 0;
    for (int i = 0; i < arrLength; i++)
        if (arr[i] >= 0)
            CountPositive++;
    return CountPositive;



}

int CountNigativeNumbersInArray(int arr[], int arrLength) {

    int CountNegative = 0;
    for (int i = 0; i < arrLength; i++)
        if (arr[i] < 0)
            CountNegative++;
    return CountNegative;



}

int Myabs(int Number) {

    if (Number < 0)
        return Number * -1;
    else
        return Number;

}

float GetFractionPart(float Number) {

    return Number - (int)Number;

}

int MyRound(float Number) {

    int IntigerPart = (int)Number;

    float FractionPart = GetFractionPart(Number);

    if (abs(FractionPart) >= .5) {
        if (Number < 0) {
            IntigerPart--;

        }
        else
            IntigerPart++;

    }
    
    else
        
        return IntigerPart;
        



}

int MyFloor(float Number) {

    int IntigerPart = (int)Number;

    

    
        if (Number < 0) 
          return --IntigerPart;
        else
          return IntigerPart;

    

    

}

int MyCeil(float Number) {

    int IntigerPart = (int)Number;




    if (Number < 0)
        return IntigerPart;
    else
        return ++IntigerPart;





}

float MyPow(float Number,int Power) {

    float pow = 1;
    for (int i = 1; i <= Power; i++) {
    
        pow *= Number;
    
    }
    return pow;

}

float Mysqrt(float Number) {
    
    return pow(Number,0.5);
}
int main()
{
    srand((unsigned)time(NULL));

    int arrLength=0, arr[100],NumToCheck;

    FillArr(arr, arrLength);

    NumToCheck = ReadPositiveNumber("Please enter Number to Check");

    cout << "\nOriginal Array: ";
    PrintArr(arr, arrLength);

    cout << NumToCheck << " is Repeated " << ArrayElementFrequency(arr, arrLength, NumToCheck) << " Time(s)\n";*/

    Problem23
    FillArrRandomNumbers(arr, arrLength);*/

    cout << "\nArray Elements: ";
    PrintArr(arr, arrLength);*/

    Problem24
    cout << "Max Number in Array is: ";
    cout << GetMaxNumberInArray(arr, arrLength) << endl;

    Problem25
    cout << "Minimum Number in Array is: ";
    cout << GetMinNumberInArray(arr, arrLength) << endl;

    Problem26
    cout << "Sum of Array is: ";
    cout << GetSumArray(arr, arrLength) << endl;

    Problem27
    cout << "Average of Array Elements is: ";
    cout<<GetAvgArray(arr, arrLength) << endl;

    Problem28
    int arr2[100];

    arrCopy(arr, arr2, arrLength);

    cout << "\nArray1 Elements: ";
    PrintArr(arr, arrLength);

    cout << "\nArray2 Elements after copy: ";
    PrintArr(arr2, arrLength);*/

    Problem29
    int arr2Length = 0;

    cout << "\nArray1 Elements: ";
    PrintArr(arr, arrLength);

    arrCopyPrime(arr, arr2, arrLength,arr2Length);


    cout << "\nPrime Numbers in Array2: ";
    PrintArr(arr2, arr2Length);*/

    Problem30
    int arr3[100];
    FillArrRandomNumbers(arr2, arrLength);

    cout << "\nArray1 Elements: ";
    PrintArr(arr, arrLength);

    cout << "\nArray2 Elements: ";
    PrintArr(arr2, arrLength);

    SumOfTowArrays(arr, arr2, arr3, arrLength);

    cout << "\nSum of Array1 and Array2: ";
    PrintArr(arr3, arrLength);*/

    Problem31
    arrLength = ReadPositiveNumber("Please enter Number of elements");
    FillArrayInOrder(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArr(arr, arrLength);

    ArrayShuffle(arr, arrLength);

    cout << "\nArray Elements after shuffle: ";
    PrintArr(arr, arrLength);*/

    Problem32
    
    FillArrRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArr(arr, arrLength);

    CopyArrayInReversed(arr,arr2, arrLength);

    cout << "\nArray2 Elements After copying Array1 in Reversed order: ";
    PrintArr(arr2, arrLength);*/


    Problem33
    string arr1[100];
    arrLength=ReadPositiveNumber("Please enter How Many Keys Do you want to generate");
    GenerateArrayOfKeys(arr1, arrLength);
    PrintArrayString(arr1, arrLength);*/

    Problem34
    int NumberToSerch = 0;

    FillArrRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArr(arr, arrLength);

    NumberToSerch = ReadPositiveNumber("Please enter the number you looking for");
    cout << "Number you are looking for is:" << NumberToSerch << endl;

    short NumberPosition = SerchNumberInArray(arr, arrLength, NumberToSerch);

    if (NumberPosition == -1)
        cout << "The number is not found )-:\n";
    else {
        cout << "the number found at position: " << NumberPosition << endl;
        cout << "the number found its order: " << NumberPosition +1 << endl;

    }*/
    Problem35
    FillArrRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArr(arr, arrLength);

    NumberToSerch = ReadPositiveNumber("Please enter the number you looking for");
    cout << "Number you are looking for is:" << NumberToSerch << endl;

    bool NumberPosition = isNumberInArray(arr, arrLength, NumberToSerch);

    if (isNumberInArray(arr, arrLength, NumberToSerch))
        cout << "Yes, The Number is found :-)" << endl;
    else
        cout << "No, The Number is Not found :-)" << endl;*/


        Problem36
    InputUserNumbersInArray(arr, arrLength);

    cout << "\nArray Elements: " << arrLength << endl;
    PrintArr(arr, arrLength);*/


    Problem37
    FillArrRandomNumbers(arr, arrLength);

    cout << "\nArray1 Elements: ";
    PrintArr(arr, arrLength);

    CopyArrayUsingAddArrElement(arr, arr2, arrLength, arr2Length);

    cout << "\nArray2 Elements: ";
    PrintArr(arr2, arr2Length);*/

    Problem38

    FillArrRandomNumbers(arr, arrLength);

    cout << "\nArray1 Elements: ";
    PrintArr(arr, arrLength);

    CopyOddNumberUsingAddArrElement(arr, arr2, arrLength, arr2Length);

    cout << "\nArray2 Elements: ";
    PrintArr(arr2, arr2Length);*/


    Problem39

    FillArrRandomNumbers(arr, arrLength);

    cout << "\nArray1 Elements: ";
    PrintArr(arr, arrLength);

    CopyPrimeNumberUsingAddArrElement(arr, arr2, arrLength, arr2Length);

    cout << "\nArray2 Prime Numbers: ";
    PrintArr(arr2, arr2Length);*/


    Problem40
    FillArr(arr, arrLength);

    CopyDistinctNumbersToArray(arr, arr2, arrLength, arr2Length);

    cout << "\nArray1 Elements: ";
    PrintArr(arr, arrLength);

    cout << "\nArray2 distinct Elements: ";
    PrintArr(arr2, arr2Length);*/



    Problem41
    FillArr(arr, arrLength);

    cout << "\nArray1 Elements: ";
    PrintArr(arr, arrLength);

    if (isPalindromArray(arr, arrLength))
       cout << "Yes, Array is Palindrom\n";
    else
       cout << "No, Array is Not Palindrom\n";


    Problem42
    FillArrRandomNumbers(arr, arrLength);

    cout << "\nArray1 Elements: ";
    PrintArr(arr, arrLength);

    int OddNum = CountOddNumbersInArray(arr, arrLength);
    cout << "Odd Numbers Count is: " << OddNum << endl;*/


    Problem43
    FillArrRandomNumbers(arr, arrLength);

    cout << "\nArray1 Elements: ";
    PrintArr(arr, arrLength);

    int EvenNum = CountEvenNumbersInArray(arr, arrLength);
    cout << "Even Numbers Count is: " << EvenNum << endl;*/


    Problem44
    FillArrRandomNumbers(arr, arrLength);

    cout << "\nArray1 Elements: ";
    PrintArr(arr, arrLength);

    int CountPositive = CountPositiveNumbersInArray(arr, arrLength);

    cout << "Positive Numbers Count is: " << CountPositive << endl;*/

    Problem45
    FillArrRandomNumbers(arr, arrLength);

    cout << "\nArray1 Elements: ";
    PrintArr(arr, arrLength);

    int CountNigative = CountNigativeNumbersInArray(arr, arrLength);

    cout << "Positive Numbers Count is: " << CountNigative << endl;*/

    Problem46
    float Num = ReadNumber();

    cout << "My abs Result is: " << Myabs(Num) << endl;
    cout << "c++ abs Result is: " << abs(Num) << endl;

    Problem47

    cout << "My round Result is: " << MyRound(Num) << endl;
    cout << "c++ round Result is: " << round(Num) << endl;

    Problem48+49+50
    

   cout << "My floor Result is: " << MyFloor(Num) << endl;
    cout << "c++ floor Result is: " << floor(Num) << endl;*/

    cout << "My ceil Result is: " << MyCeil(Num) << endl;
    cout << "c++ ceil Result is: " << ceil(Num) << endl;

    int Power = ReadPositiveNumber("Please enter Power");
    cout << "My Power Result is: " << MyPow(Num,Power) << endl;
    cout << "c++ Power Result is: " << pow(Num,Power) << endl;

    cout << "My sqrt Result is: " << Mysqrt(Num) << endl;
    cout << "c++ sqrt Result is: " << sqrt(Num) << endl;

}

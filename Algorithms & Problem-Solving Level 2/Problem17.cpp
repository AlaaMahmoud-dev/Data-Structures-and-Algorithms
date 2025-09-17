#include <iostream>
#include <string>
using namespace std;

string ReadPassword() {

    string Pass = "";
    cout << "Please enter a 3 Letter Password from AAA to ZZZ\n";
    cin >> Pass;
    return Pass;


}

bool GuessPasswordFromAAAtoZZZ(string Pass) {

    string word = "";
    int counter = 0;
    for (int i = 65; i <= 90; i++) {


        for (int j = 65; j <= 90; j++) {


            for (int k = 65; k <= 90; k++) {

                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                counter++;
                cout << "Trial[" << counter << "]:" << word << endl;
                if (word == Pass) {
                    cout << "\nPasword is " << word << endl;
                    cout << "Found After " << counter << " Trial(s)" << endl;
                    return true;
                }
                word = "";

            }



        }


    }

    return false;
}

int main()
{

    GuessPasswordFromAAAtoZZZ(ReadPassword());



}

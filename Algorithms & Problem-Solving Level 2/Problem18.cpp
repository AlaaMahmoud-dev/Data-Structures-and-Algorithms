#include <iostream>
#include <string>

using namespace std;

string ReadText() {


    string Text;
    cout << "Please enter Text\n";
    getline(cin, Text);
    return Text;


}
string TextEncryption(string Text, int EncryptionKey) {

    for (int i = 0; i < Text.length(); i++) {


        Text[i] = char((int) Text[i] + EncryptionKey);


    }
    return Text;



}
string TextDicryption(string Text, int EncryptionKey) {

    for (int i = 0; i < Text.length(); i++) {
    
    
        Text[i] = char((int)Text[i] - EncryptionKey);
    
    
    }
    return Text;


}

int main()
{
    const int Encryptionkey = 2;

    string TextBeforeEncryption, 
        TextAfterEncryption,
        TextAfterDicryption;

    TextBeforeEncryption = ReadText();
    TextAfterEncryption = TextEncryption(TextBeforeEncryption, Encryptionkey);
    TextAfterDicryption = TextDicryption(TextAfterEncryption, Encryptionkey);

    cout << "Text Before Encreption is: " << TextBeforeEncryption << endl;
    cout << "Text After Encreption is: " << TextAfterEncryption << endl;
    cout << "Text After Dicreption is: " << TextAfterDicryption << endl;

    


}

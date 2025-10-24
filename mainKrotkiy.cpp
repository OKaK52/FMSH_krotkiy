#include <iostream>
#include <string>
#include <taskA.h>
using namespace std;


int main() {
    string text;
    int key;

    cout << "Tipe text: ";
    getline(cin, text);

    cout << "Tipe key: ";
    cin >> key;

    string encrypted = encrypt(text, key);
    cout << "Encrypted: " << encrypted << endl;

    string decrypted = decrypt(encrypted, key);
    cout << "Decrypted: " << decrypted << endl;
}
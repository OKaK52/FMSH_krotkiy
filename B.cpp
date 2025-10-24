#include <iostream>
#include <string>
using namespace std;

string xorCrypt(string text, string key) {
    string result = text;

    for (int i = 0; i < text.length(); i++) {
        int keyIndex = i % key.length();

        result[i] = text[i] ^ key[keyIndex];
    }

    return result;
}

int main() {
    string text = "Hello";
    string key = "key";

    cout << "First text: " << text << endl;
    cout << "Key: " << key << endl;

    string encrypted = xorCrypt(text, key);
    cout << "Encrypted: " << encrypted << endl;

    string decrypted = xorCrypt(encrypted, key);
    cout << "Decrypted: " << decrypted << endl;

    return 0;
}
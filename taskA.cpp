#include <string>
using namespace std;
string encrypt(string text, int key) {
    string result = "";

    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + key;
            if (ch > 'Z') ch = ch - 26;
            if (ch < 'A') ch = ch + 26;
        }
        else if (ch >= 'a' && ch <= 'z') {
            ch = ch + key;
            if (ch > 'z') ch = ch - 26;
            if (ch < 'a') ch = ch + 26;
        }

        result += ch;
    }

    return result;
}

string decrypt(string text, int key) {
    return encrypt(text, -key);
}

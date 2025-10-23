#include <iostream>
#include <string>
using namespace std;

// Функция шифрования
string encrypt(string text, int key) {
    string result = "";

    for (int i = 0; i < text.length(); i++) {
        char c = text[i];

        // Шифруем только буквы
        if (c >= 'A' && c <= 'Z') {
            // Для больших букв
            c = (c - 'A' + key) % 26 + 'A';
        }
        else if (c >= 'a' && c <= 'z') {
            // Для маленьких букв
            c = (c - 'a' + key) % 26 + 'a';
        }

        result += c;
    }

    return result;
}

// Функция расшифровки
string decrypt(string text, int key) {
    // Чтобы расшифровать, сдвигаем в обратную сторону
    return encrypt(text, 26 - key);
}

int main() {
    string text;
    int key;

    cout << "Введите текст: ";
    getline(cin, text);

    cout << "Введите ключ: ";
    cin >> key;

    string encrypted = encrypt(text, key);
    cout << "Зашифровано: " << encrypted << endl;

    string decrypted = decrypt(encrypted, key);
    cout << "Расшифровано: " << decrypted << endl;

    return 0;
}
#include <iostream>
#include <string>

#define SHIFT 3

using namespace std;

string encrypt_caesar(const string *text, uint32_t shift) {
    string encrypted_text;

    for (char c : *text) {
        if (isalpha(c)) {
            if (c >= 'a' && c <= 'z') 
                c = ((c - 'a' + shift) % 26) + 'a';
            else if (c >= 'A' && c <= 'Z') 
                c = ((c - 'A' + shift) % 26) + 'A';

            encrypted_text += c;
        }
    }

    return encrypted_text;
}

string decrypt_caesar(const string *text, uint32_t shift) {
    string decrypted_text;

    for (char c : *text)
        decrypted_text += (c - shift);

    return decrypted_text;
}

int main() {
    string plain_text;
    string cipher_text;

    cout << "Enter the text for encryption: ";
    getline(cin, plain_text);

    cipher_text = encrypt_caesar(&plain_text, SHIFT);

    cout << "Encrypted text: " << cipher_text << endl;

    cout << "Enter the encrypted text: ";
    getline(cin, cipher_text);

    plain_text = decrypt_caesar(&cipher_text, SHIFT);

    cout << "Decrypted text: " << plain_text << endl;

    return 0;
}
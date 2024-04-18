#include <iostream>
#include <string>

#define NAME_MIN_LENGTH 1
#define NAME_MAX_LENGTH 64
#define DOMAIN_MIN_LENGTH 1
#define DOMAIN_MAX_LENGTH 63
#define ALLOWED_NAME_SYM "!#$%&'*+-/=?^_{|}~`."
#define ALLOWED_DOMAIN_SYM "-."
#define PARTS_DELIM '@'

using namespace std;

bool is_allowed_sym(char check_char, const char *allowed_sym) {
    for (int i = 0; allowed_sym[i] != '\0'; i++) {
        if (isalnum(check_char) || check_char == allowed_sym[i])
            return true;
    }

    return false;
}

bool validate_email(const string *email_addr) {
    bool first_part = true;
    uint32_t name_length = 0;
    uint32_t domain_length = 0;
    char prev_char;

    for (char curr_char : *email_addr) {
        if (curr_char == '.' && prev_char == '.')
            return false;

        if (first_part) {
            if (curr_char == PARTS_DELIM) {
                if (name_length < NAME_MIN_LENGTH)
                    return false;

                first_part = false;
            } else {
                name_length++;

                if (name_length > NAME_MAX_LENGTH)
                    return false;

                if (curr_char == '.' && name_length <= NAME_MIN_LENGTH)
                    return false;

                if (!is_allowed_sym(curr_char, ALLOWED_NAME_SYM)) {
                    return false;

                }
            }
        } else {
            if (curr_char == PARTS_DELIM) {
                return false;
            } else {
                domain_length++;

                if (domain_length > DOMAIN_MAX_LENGTH)
                    return false;

                if (curr_char == '.' && domain_length <= DOMAIN_MIN_LENGTH)
                    return false;

                if (!is_allowed_sym(curr_char, ALLOWED_DOMAIN_SYM)) {
                    return false;
                }
            }
        }

        prev_char = curr_char;
    }

    if (domain_length < DOMAIN_MIN_LENGTH)
        return false;

    if (prev_char == '.')
        return false;

    return true;
}

int main() {
    string email_addr;

    cout << "Enter email address: ";
    getline(cin, email_addr);

    if (validate_email(&email_addr))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
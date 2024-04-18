#include <iostream>
#include <cstring>
#include <math.h>

#define OCTET_SIZE_BIT 8
#define OCTET_NUM 4
#define OCTET_DELIM "."

bool check_octet_dgt(const std::string *oct_str, const uint32_t dgt_size_bit) {
    uint32_t oct_int = 0;
    uint32_t dgt_max_val;
    bool dgt_valid = true;

    dgt_max_val = std::pow(2, dgt_size_bit) - 1;

    for (char ch : *oct_str) {
        if (!isdigit(ch)) {
            dgt_valid = false;
            break;
        }
    }

    if (dgt_valid && oct_str->length() > 1) {
        if ((*oct_str)[0] == '0')
                dgt_valid = false;
    }

    if (dgt_valid) {
        try {
            oct_int = stoi(*oct_str, nullptr, 10);
        }
        catch (const std::invalid_argument& e) {
            dgt_valid = false;
        }
        catch (const std::out_of_range& e) {
            dgt_valid = false;
        }

        if (dgt_valid) {
            if (oct_int < 0 || oct_int > dgt_max_val)
                dgt_valid = false;
        }
    }

    return dgt_valid;
}

int get_delim_num(const std::string *ip_str, const char *delim) {
    uint32_t delim_num = 0;

    for (char ch : *ip_str) {
        if (ch == *delim)
            delim_num++;
    }

    return delim_num;
}

bool get_octet_str(const std::string *ip_str, uint32_t oct_num,
                   const char *delim, std::string *oct_str) {
    char *part_p;
    char *str_buf;
    size_t i = 0;

    str_buf = (char *) calloc(ip_str->length() + 1, sizeof(char));

    if (str_buf == nullptr) {
        std::cerr << "Error: memory not allocated." << std::endl;
        exit(ENOMEM);
    }

    strcpy(str_buf, ip_str->c_str());

    part_p = std::strtok(str_buf, delim);

    while (i < oct_num && part_p != nullptr) {
        part_p = std::strtok(nullptr, delim);
        i++;
    }

    if (part_p != nullptr) {
        *oct_str = part_p;

        free(str_buf);

        return true;
    } else {
        free(str_buf);

        return false;
    }
}

int main(int argc, char *argv[])
{
    bool validate_pass = true;
    std::string oct_str;
    std::string in_str;

    std::cout << "Enter IPv4 address: ";
    std::getline(std::cin, in_str);

    if (get_delim_num(&in_str, OCTET_DELIM) != OCTET_NUM - 1) {
        validate_pass = false;
    } else {
        for (int i = 0; i < OCTET_NUM; i++) {
            if (get_octet_str(&in_str , i, OCTET_DELIM, &oct_str)){
                if (!check_octet_dgt(&oct_str, OCTET_SIZE_BIT)) {
                    validate_pass = false;
                    break;
                }
            } else {
                validate_pass = false;
                break;
            }
        }
    }

    if (validate_pass)
        std::cout << "Valid" << std::endl;
    else
        std::cout << "Invalid" << std::endl;

    return 0;
}
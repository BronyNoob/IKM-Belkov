#include "power.h"

std::string multiply_strings(const std::string &num1, const std::string &num2) {
    int len1 = num1.size();
    int len2 = num2.size();
    std::string result(len1 + len2, '0');

    for (int i = len1 - 1; i >= 0; --i) {
        int carry = 0;
        for (int j = len2 - 1; j >= 0; --j) {
            int temp = (result[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
            result[i + j + 1] = temp % 10 + '0';
            carry = temp / 10;
        }
        result[i] += carry;
    }

    size_t startpos = result.find_first_not_of("0");
    if (std::string::npos != startpos) {
        return result.substr(startpos);
    }
    return "0";
}

bool is_digits(const std::string &str) {
    for (char c : str) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

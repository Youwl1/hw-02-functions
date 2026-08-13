#include <iostream>
#include "password_checker.h"
#include <cctype>
bool check_password(std::string s, int min_length){
    bool count_upper{false};
    bool count_lower{false};
    bool count_digit{false};
    bool count_sp_symbol{false};
    if (s.size() < min_length){
        return false;
    }
    for(char m: s){
        if (std::isupper(m)){
            count_upper = true;
        }
        if (std::islower(m)){
            count_lower = true;
        }
        if (std::isdigit(m)){
            count_digit = true;
        }
        if (m == '!' || m == '#' || m == '$' || m == '%' || m == '^' || m == '*'){
            count_sp_symbol = true;
        }
    }
    if (count_upper == true && count_lower == true && count_digit == true && count_sp_symbol == true){
        return true;
    }
    return false;
}
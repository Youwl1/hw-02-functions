#include <iostream>
#include "find_char.h"
int find_char(std::string str, char ch, int from, int to){
    if (to == 0) {to = str.size();}
    for (from; from < to; from++){
        if (str[from] == ch) {return from;}
    }
    return -1;
}